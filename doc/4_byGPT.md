
# C++ Concepts and Practices

This guide covers several advanced C++ concepts such as memory management, smart pointers, struct usage, bitwise operations, enums, and more. It provides examples and explanations for better understanding.

## Including Header Files

### Local Header Files
To link a local header file, use double quotes:

```cpp
#include "header.h"
```

### Standard Header Files
To link a standard library header file, use angle brackets:

```cpp
#include <header>
```

## Example of a Header File

Below is an example of a `header.h` file demonstrating the use of guards, structures, and functions:

```cpp
#ifndef ADDER_H
#define ADDER_H

// Example function
int lifeup() {
    static int life = 3; // Static ensures the value persists across calls
    return ++life;
}

// Example struct
struct user {
    const int id;
    mutable std::string name; // Allows modification even in const objects
    int course_count;
    const char* email; // Pointer is const, but the data it points to can be changed
};

// Overloaded function example
void incr(auto& num) {
    ++num;
    std::cout << "I am int " << num << std::endl;
}

void incr(auto* ptr) {
    ++(*ptr);
    std::cout << "I am int " << *ptr << std::endl;
}

#endif // ADDER_H
```

## Using the Header File in `main.cpp`

```cpp
#include "header.h"

int main() {
    int life = 0;
    std::cout << life << std::endl;
    std::cout << (life = lifeup()) << std::endl; // Static value maintains state
    std::cout << -life << std::endl; // Negative value

    // Logical operations
    bool isLoggedIn = -0; // Any non-zero value is true
    bool isAdmin = 1;
    bool isGoogleUser = true;

    if (!(isAdmin && isLoggedIn) == 1) {
        std::cout << "\n";
    }
}
```

## Bitwise Operations

Understanding the bitwise operations and their outcomes:

```cpp
#include <iostream>

int main() {
    uint8_t x = 2;
    uint8_t y = 3;
    std::cout << (x & y) << std::endl;  // AND operation
    std::cout << (x | y) << std::endl;  // OR operation
    std::cout << (x ^ y) << std::endl;  // XOR operation
    std::cout << (~y) << std::endl;     // NOT operation, returns negative because of two's complement
    std::cout << (-~x) << std::endl;    // Expression explanation
    std::cout << (y << 1) << std::endl; // Left shift
    std::cout << (y >> 1) << std::endl; // Right shift
}
```

## Dynamic Memory Management

### Using `new` Keyword

Allocate memory on the heap using the `new` keyword, and remember to release it with `delete`:

```cpp
try {
    int* myptr = new int[10];  // Allocate memory
    delete[] myptr;  // Correct way to delete an array
} catch (...) {
    std::cerr << "Memory allocation failed." << std::endl;
}
```

### Dynamic Arrays

```cpp
int* arr = new int[5]{1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
}
delete[] arr;  // Release memory
```

## Using `struct`

Structs are useful for grouping related variables. Here’s how you can define and use structs:

```cpp
struct Student {
    int uid;
    std::string name;
    int section;
    float marks;

    void setValues(int id, std::string name, int sec, float marks) {
        uid = id;
        this->name = name;
        section = sec;
        this->marks = marks;
    }

    void display(const Student& student) {
        std::cout << student.uid << std::endl;
        std::cout << student.name << std::endl;
        std::cout << student.section << std::endl;
        std::cout << student.marks << std::endl;
    }
};

Student rj, sahil;
rj.setValues(1, "roushan", 3, 99.9);
rj.display(rj);
sahil = rj; // Copying values
sahil.display(sahil);
```

## Enum

Enums are a great alternative to preprocessor constants:

```cpp
enum MSOffice : uint8_t {  // Specifying size 
    BOLD = 3,  // Values start from 0
    ITALIC = 1,
    UPPERCASE,
    LOWERCASE = 2,
    FONTS  // Relative value is now 3
};

std::cout << MSOffice(BOLD);
std::cout << '\n' << MSOffice(FONTS);
auto a = MSOffice(ITALIC);
std::cout << a;
```

## `auto` Keyword

`auto` automatically deduces the type of the variable. Useful in various scenarios:

```cpp
auto feedback = api_call();
std::cout << feedback;
if (typeid(feedback) == typeid(std::string)) {
    puts("\nWe are the same type.");
}
auto response = another_api_call();
if (typeid(response) == typeid(bool)) {
    puts("We meet again.");
}
```

## Summary

This guide covered:
- **Including header files** (`#include "header.h"` vs. `#include <header>`)
- **Bitwise operations** and their use cases
- **Dynamic memory management** with `new` and `delete`
- **Using structs** to group related data
- **Enums** as an alternative to preprocessor constants
- **The `auto` keyword** for type inference

Feel free to use this as a reference for implementing and understanding these advanced C++ concepts in your projects!
