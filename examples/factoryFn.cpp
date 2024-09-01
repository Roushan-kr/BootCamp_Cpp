#include <iostream>
#include <memory>  // For std::unique_ptr

// Abstract Base Class
class Shape {
public:
    virtual void draw() const = 0;  // Pure virtual function
    virtual ~Shape() = default;     // Virtual destructor for safe polymorphic use
};

// Derived Class - Circle
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle." << std::endl;
    }
};

// Derived Class - Square
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Square." << std::endl;
    }
};

// Factory Function - provide abstract method to create and return class instnace
std::unique_ptr<Shape> createShape(const std::string& shapeType) {
    if (shapeType == "circle") {
        return std::make_unique<Circle>();  // Creates a Circle object
    } else if (shapeType == "square") {
        return std::make_unique<Square>();  // Creates a Square object
    }
    return nullptr;  // If an unknown shape type is passed
}

int main() {
    auto shape1 = createShape("circle");
    if (shape1) shape1->draw();  // Output: Drawing a Circle.

    auto shape2 = createShape("square");
    if (shape2) shape2->draw();  // Output: Drawing a Square.

    return 0;
}


/*
 It provides a flexible way to construct objects without requiring the caller to know the details 
 of how the object is created. Factory functions are commonly used to encapsulate the creation
 logic, manage dynamic memory, or implement specific design patterns like the Factory Method
 or Abstract Factory.
 */