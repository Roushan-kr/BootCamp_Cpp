# Control Structures and Loops in C++

## Conditional Statements

### Ternary Operator

The ternary operator allows for a concise conditional assignment or action:

```cpp
(rating > 1 && rating < 3) ? cout << "Help Us to improve\nYour feedback:- " /* getline(cin, feedback)*/ : cout << "Thanks for rating\n";
```

### If-Else Statements

A more explicit way to handle multiple conditions:

```cpp
if (condition) {
    // code block
} else if (anotherCondition) {
    // another code block
} else {
    // default code block
}
```

### Switch-Case Statements

Used for decision-making based on a variable’s value:

```cpp
switch (var) {
    case 'char':  // or an integer
        // work
        break;
    default:
        // default work
}
```

## Arrays in C++

Define an array without specifying its size (modern syntax):

```cpp
int arr[] = {10, 11, 12, 13, 14, 15, 16, 17};  // Sometimes not recommended
```

## Loops in C++

### Traditional Loops

- **For Loop**: Used for iterating a set number of times.
- **While Loop**: Repeats as long as a condition is true.
- **Do-While Loop**: Executes at least once and repeats while a condition is true.

### Range-Based For Loop (Modern C++)

Iterates over elements directly:

```cpp
for (int i : arr) {
    cout << i << endl;
    // Pointers can also be used within this loop
    int* ptr = &i;  // Even though the pointer is updated, the original array is not
    cout << *ptr << "\n\n";
}
```

### Pointer Usage in Loops

Pointers can be used to iterate through arrays:

```cpp
int* ptr = arr;
for (; *ptr < 19; ptr++) {
    cout << "Value is: " << *ptr << endl;
    cout << "&Value is: " << ptr << endl;
}
```

## Character Arrays and Strings

C-style strings (character arrays) are null-terminated by default:

```cpp
char myString[] = {"roushan"};  // Compiler automatically adds a null terminator '\0' at the end
char myName[] = {'r', 'o', 'u', 's', 'h', 'a', 'n', 0};  // Explicitly adds null terminator
```

## Summary

- **Conditional Statements**: Use ternary operators, `if-else`, and `switch` for decision-making.
- **Loops**: Use `for`, `while`, `do-while`, and range-based loops for iteration.
- **Arrays**: Modern syntax allows omitting the size, but it’s sometimes not recommended.
- **Pointers**: Useful for low-level data manipulation and memory management.
- **Character Arrays**: C-style strings need a null terminator to signify the end.

This guide provides an overview of common control structures, loops, and array handling techniques in C++.


This reformatting keeps the essential content organized and clear, focusing on control structures, loops, arrays, pointers, and string handling in C++.