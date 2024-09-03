# C++ Programming: Identifiers, Escape Sequences, Data Types, and Qualifiers

## Naming Conventions for Identifiers

When naming identifiers in C++, use the following guidelines:

1. **_ (Underscore) at the Start**: Indicates that the identifier is private.
2. **__ (Double Underscore)**: Reserved for system keywords or special purposes.
3. **Consistent Style**: Use a consistent style for declaring identifiers throughout the codebase.

## Escape Sequences in C++

Escape sequences are used in C++ to represent certain special characters or actions. Here are some examples:

1. **\b**: Removes the previous character.
    ```cpp
    cout << "That's me\? \b";
    ```
2. **\f**: Form feed. In older systems, it was used to feed a new paper by printers.
    ```cpp
    cout << "\nThat's me ? \f";
    ```
3. **\r**: Carriage return. Moves the cursor back to the beginning of the line, replacing up to the length of the character array.
    ```cpp
    cout << "\nthis is me\t u \v r \r a";
    ```
4. **\a**: Produces an alert (bell) sound.
    ```cpp
    cout << "this is \a";
    ```

## Data Types in C++

The basic data types in C++ are:

| Type                        | Keyword   |
|-----------------------------|-----------|
| Boolean                     | `bool`    |
| Character                   | `char`    |
| Integer                     | `int`     |
| Floating-point              | `float`   |
| Double precision floating-point | `double` (default if decimal involved) |
| Valueless                   | `void`    |

**Note**: We can use qualifiers like `const` to add extra features to these types.

## Qualifiers in C++

Qualifiers provide additional information or behavior to variables and functions. Here are some common qualifiers:

1. **const**: Declares a variable as constant, meaning its value cannot be changed after initialization.

2. **volatile**: Informs the compiler that a variable may change at any time, preventing certain optimizations that assume the variable cannot change unexpectedly (useful in multithreading or when interacting with hardware).

3. **mutable**: Allows a member of an object to be modified even if the object is declared as `const`.

4. **static**:
   - **Within a class**: Shared among all instances of the class.
   - **Within a function**: Retains its value between function calls.
   - **At file scope**: Limits visibility to the file (internal linkage).

5. **extern**: Declares a variable or function that is defined in another translation unit (file).

6. **register**: Suggests to the compiler that the variable should be stored in a CPU register for faster access. Modern compilers often ignore this qualifier, as they handle optimization more efficiently.

7. **constexpr**: Declares that the value of a variable or the result of a function can be computed at compile time.

8. **inline**: Suggests that the compiler replace the function call with the function code to avoid function call overhead.

9. **restrict**: Indicates that a pointer is the only reference to that memory location, allowing the compiler to optimize more aggressively.

---
`getline(method, variable)` ->`getline(cin,var)` to get whole line of input insted of one word