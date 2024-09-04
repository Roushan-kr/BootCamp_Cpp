# C++ Memory Management: Smart Pointers and Move Semantics

In modern C++ (C++11 and above), manual memory management using raw pointers can be error-prone and lead to issues like memory leaks or undefined behavior. To address this, C++ provides **smart pointers**, which are safer and more efficient alternatives to raw pointers. These smart pointers are provided by the `<memory>` library and offer various features such as automatic memory management and reference counting.

## Smart Pointers Overview

Smart pointers are essentially wrappers around raw pointers that automatically manage the memory they point to. They help avoid common pitfalls associated with raw pointers, such as forgetting to delete memory or accidentally deleting memory multiple times.

### Types of Smart Pointers

1. **`unique_ptr`**: A smart pointer that owns and manages another object through a pointer and disposes of that object when the `unique_ptr` goes out of scope. `unique_ptr` cannot be copied, ensuring that there is only one owner of the pointed-to object.

    ```cpp
    #include <memory>
    #include <iostream>

    int main() {
        // Incorrect way to declare a unique_ptr:
        // unique_ptr<User> ptr1 = new User(); // ERROR: Does not compile

        // Correct way using direct initialization (not recommended because of raw 'new'):
        std::unique_ptr<User> ptr1(new User());

        // Recommended way using `make_unique` (safer and concise):
        std::unique_ptr<User> ptr2 = std::make_unique<User>();

        ptr2->testFunction();  // Use the unique pointer to access member functions

        // std::unique_ptr<User> ptr3 = ptr2; // ERROR: Cannot copy a unique_ptr

        // ptr2 goes out of scope here, and the memory it manages is automatically deleted.
    }
    ```

2. **`shared_ptr`**: A smart pointer that allows multiple pointers to share ownership of the same object. The object is destroyed when the last `shared_ptr` pointing to it is destroyed or reset. It maintains a reference count to keep track of how many `shared_ptr`s are pointing to the same object.

    ```cpp
    #include <memory>
    #include <iostream>

    int main() {
        // Creating a shared_ptr using `make_shared`
        std::shared_ptr<User> ptr1 = std::make_shared<User>();
        ptr1->testFunction();

        std::cout << "Address of ptr1: " << &ptr1 << std::endl;

        // Copying shared_ptr (increases reference count)
        std::shared_ptr<User> ptr2 = ptr1;
        ptr2->testFunction();

        std::cout << "Address of ptr2: " << &ptr2 << std::endl;

        // Creating a weak_ptr from a shared_ptr (does not affect reference count)
        std::weak_ptr<User> weakPtr = ptr1;  // Weak pointer does not own the object

        // When `ptr1` and `ptr2` go out of scope, the managed object is destroyed.
    }
    ```

3. **`weak_ptr`**: A smart pointer that holds a non-owning ("weak") reference to an object that is managed by `shared_ptr`. It is used to break circular references that could cause memory leaks.

### Move Semantics

Move semantics provide a way to transfer resources (such as memory) from one object to another without performing a deep copy. This is useful in cases where copying objects would be expensive.

- The `std::move` function enables moving instead of copying. Once an object is moved from, it is typically left in a valid but unspecified state.

#### Example: Swap Function Using Move Semantics

```cpp
#include <utility>  // For std::move
#include <iostream>

template <typename T>
void swaps(T &a, T &b) {
    T temp = std::move(b);  // Move 'b' into 'temp'
    b = std::move(a);       // Move 'a' into 'b'
    a = std::move(temp);    // Move 'temp' into 'a'

    std::cout << "a is " << a << " and b is " << b << std::endl;
}
```

#### Example: Using Rvalue References

Rvalue references (`&&`) are used to indicate that a function parameter or variable is meant to be a temporary object that can be "moved" from.

```cpp
#include <iostream>
#include <string>

std::string PrintMe() {
    return "Now you can directly reference me\n";
}

int main() {
    std::string&& rref = PrintMe();  // rref is an rvalue reference to a temporary
    std::cout << rref;  // Output: Now you can directly reference me
}
```

## Additional Resources

- [Microsoft Documentation on Smart Pointers](https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170): Learn more about smart pointers and modern C++ techniques.

### Summary

By using smart pointers and move semantics, you can write safer and more efficient C++ code that handles dynamic memory more effectively and avoids common memory management errors.
