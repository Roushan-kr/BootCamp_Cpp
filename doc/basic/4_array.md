
# Array and Pointer Arithmetic in C++

## Array Initialization and Size

```cpp
int intArray[4] = {1, 2, 3, }; // Array of 4 integers, with 3 initialized values
cout << sizeof(intArray) / sizeof(int); // Output: 4 (Number of elements in the array)
```

## Accessing Array Elements

```cpp
for (auto i : intArray) {
    cout << i; // Output: 1230 (Values in the array)
}
```

## Pointer Arithmetic with Arrays

In C++, the array name `intArray` acts as a pointer to its first element. Here’s how pointer arithmetic works with arrays:

```cpp
cout << intArray; // Output: Address of the array (base address)

cout << *intArray; // Output: intArray[0] (Value at the base address, which is 1)

cout << *(intArray + 1); // Output: intArray[1] (Value at the base address + size of one element, which is 2)

cout << *(intArray + sizeof(int)); // Output: intArray[1] (Size of int used in pointer arithmetic)
```
-  by looking this behiabher, it first store it's base value then it just act as a pointer and derefrence like `intArray[index-1+0]`. 0 for inital increment

## Modifying and Accessing Array Elements

```cpp
cout << "\n" << (intArray[1] = 12) << endl; // Assign 12 to intArray[1] and print it (Output: 12)

cout << intArray[1] << endl; // Output: 12 (Updated value in the array)

cout << intArray[4] << endl; // Undefined behavior (Accessing out-of-bounds element)

cout << intArray[3] << endl; // Output: 0 (Default value of uninitialized element)
```

## Summary

- **Array Initialization**: Initialize arrays with values and determine size using `sizeof`.
- **Pointer Arithmetic**: Array names can be used as pointers for arithmetic operations.
- **Accessing and Modifying Elements**: Use array indexing and pointer dereferencing to access and modify array elements.



