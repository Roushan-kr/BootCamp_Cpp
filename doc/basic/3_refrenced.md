

# References and Pointers in C++

## References

References in C++ allow you to create an alias for another variable, meaning both the original variable and the reference share the same memory address.

### Example: Reference to an Array Element

```cpp
int arr[2] = {1, 2}, &sample = arr[0];
cout << sample << endl; // Output: 1
sample++;
cout << sample << endl; // Output: 2
```

### Example: Reference Data Type

```cpp
int score = 40;
int &anotherReference = score; // anotherReference points to the same memory address as score

cout << "\n" << score;                  // Output: 40
cout << "\n" << anotherReference;       // Output: 40
cout << "\n" << &anotherReference;      // Output: Address of score
cout << "\n" << &score;                 // Output: Address of score

anotherReference = 80;
cout << "\nAfter updating score: " << score << endl; // Output: 80
```

## Pointers

Pointers in C++ are variables that store the memory address of another variable. They are powerful tools for direct memory manipulation.

### Example: Pointer Basics

```cpp
int value = 40;
int *ptr = &value; // ptr stores the address of value

cout << "Address of ptr: " << &ptr << endl;     // Output: Address of ptr
cout << "Value of ptr: " << ptr << endl;        // Output: Address of value (same as &value)
cout << "Address of value: " << &value << endl; // Output: Address of value
cout << "Value pointed by ptr: " << *ptr << endl; // Output: 40
```

### Example: Double Pointer

```cpp
cout << "Value of double pointer: " << *(*(&ptr)) << endl; // Output: 40
cout << "Value of value: " << value << endl; // Output: 40
```
### Exaple Pointer derfrencing
```cpp
 int MyVar=*ptr; 
 cout<<"\n value of MyVar is "<<MyVar<<endl;

```
## Summary

- **References**: Act as aliases for variables and share the same memory address.
- **Pointers**: Store memory addresses and allow for manipulation of the values stored at those addresses.
- **Double Pointers**: Pointers that store the address of another pointer, enabling deeper levels of indirection.

### &(singlr and) ->refrenced , &&(double and)->move sigmentics

