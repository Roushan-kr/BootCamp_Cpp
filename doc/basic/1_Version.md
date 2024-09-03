C++ standards are versions of the C++ programming language that define its syntax, library functions, and behavior. Each version introduces new features and improvements, making the language more powerful, efficient, and easier to use. Here's a summary of the major C++ standards and some key features introduced in each version:

### 1. C++98 (ISO/IEC 14882:1998)
- **Released**: 1998
- **Key Features**:
  - **Standard Template Library (STL)**: Introduction of templates for generic programming.
  - **Exception Handling**: `try`, `catch`, `throw` constructs for error handling.
  - **Namespaces**: Introduced to avoid name clashes.
  - **`bool` Data Type**: Introduced as a fundamental type.

### 2. C++03 (ISO/IEC 14882:2003)
- **Released**: 2003
- **Key Features**:
  - A minor revision of C++98 with bug fixes and improvements in the language specification.
  - **Value Initialization**: Improved initialization mechanisms for objects.

### 3. C++11 (ISO/IEC 14882:2011)
- **Released**: 2011
- **Key Features**:
  - **Auto Type Deduction**: The `auto` keyword allows the compiler to deduce the type of a variable.
  - **Range-Based `for` Loop**: Simplified syntax for iterating over containers.
  - **Lambdas**: Anonymous function objects for more concise code.
  - **Move Semantics and `std::move`**: Efficient memory management by moving resources instead of copying.
  - **Smart Pointers**: `std::shared_ptr`, `std::unique_ptr` for automatic memory management.
  - **Concurrency**: `std::thread`, `std::mutex`, and other threading support.
  - **`nullptr`**: Introduced to replace `NULL` for better type safety.
  - **`constexpr`**: Allows evaluation of expressions at compile time.

### 4. C++14 (ISO/IEC 14882:2014)
- **Released**: 2014
- **Key Features**:
  - **Generic Lambdas**: Allows lambda expressions with auto parameters.
  - **`std::make_unique`**: A factory function for creating `std::unique_ptr`.
  - **`decltype(auto)`**: Deduces the return type of a function using `auto`.
  - **Binary Literals**: Writing binary numbers with `0b` prefix.

### 5. C++17 (ISO/IEC 14882:2017)
- **Released**: 2017
- **Key Features**:
  - **`std::optional`**, `std::variant`, `std::any`: New types for safer handling of optional values, variant types, and type-erased values.
  - **`std::filesystem`**: Standard library support for file system operations.
  - **Structured Bindings**: Allows unpacking tuples and pairs into separate variables.
  - **`if constexpr`**: Compile-time conditional statements.
  - **`std::string_view`**: A lightweight, non-owning view of a string.
  - **Parallel Algorithms**: Added parallel execution policies for the Standard Library algorithms.

### 6. C++20 (ISO/IEC 14882:2020)
- **Released**: 2020
- **Key Features**:
  - **Concepts**: Enables more expressive template constraints for generic programming.
  - **Ranges**: A new way to manipulate sequences of elements.
  - **Coroutines**: Native support for asynchronous programming using `co_await`, `co_yield`, and `co_return`.
  - **Modules**: A new way to organize and compile code, replacing traditional header files.
  - **Calendar and Time Zones Library**: Improved date and time handling.
  - **`constexpr` Enhancements**: More functions and algorithms can be evaluated at compile time.
  - **Three-Way Comparison (`<=>`)**: Also known as the spaceship operator, it provides a unified comparison interface.

### 7. C++23 (Upcoming)
- **Planned Release**: 2023
- **Expected Features**:
  - **Pattern Matching**: Similar to other languages like Rust.
  - **Improved `constexpr`**: Further improvements in compile-time evaluation.
  - **Enhanced Library Support**: More extensions and improvements to the Standard Library.

Each new standard builds upon the previous one, introducing features that improve the language's safety, performance, and ease of use.
<hr>

### constexpr and consteval
 - constexpr: allowing objects to be created at compile-time if all constructor arguments are also compile-time constants.
 - consteval: which requires that a function must always be evaluated at compile-time. If not, a compilation error occurs.

