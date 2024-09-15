The following headers are included in the program:

```cpp

#include <iostream>
#include <vector>
```
iostream: Provides functionalities for input and output operations.
vector: Allows you to use dynamic arrays (vectors) that can resize automatically.
Struct Definition
The struct named corner is defined to store four integer values (a, b, c, d):

```cpp
struct corner {
    int a, b, c, d;
};
```
This struct allows you to represent a geometric or mathematical corner with four values.

Overloading the Output Operator (<<)
To make the corner struct printable using the << operator, we overload it as follows:

```cpp
ostream& operator<< (ostream& stream, corner& cor) {
    return stream << cor.a << " " << cor.b << " " << cor.c << " " << cor.d << endl;
}
```
This operator takes an ostream object (like cout) and a corner object, allowing the struct’s data to be printed in a formatted way.

Working with Vectors
Vectors are dynamic arrays, and two vectors are used in this program:

Vector of integers (inty): Stores integer values.
Vector of corner objects (cor): Stores instances of the corner struct.
Adding Elements to the Vectors
The push_back() method is used to add elements to the vectors:

```cpp
inty.push_back(2);
cor.push_back({1, 2, 3, 4});
```
This method dynamically adds new elements to the end of the vectors.

Printing Vector Elements
The elements in the inty vector are printed using a loop:

```cpp
for (auto i = inty.begin(); i != inty.end(); ++i) {
    cout << *i;
}
```
The cor vector is printed using the overloaded << operator for the corner struct:

```cpp
for (int i = 0; i < cor.size(); i++) {
    cout << cor[i];
}```
Lambda Functions
A lambda function is an inline function defined with the [] syntax. Several examples of lambdas are provided:

Lambda without return:
```cpp
[]{cout << "hello i lambda!!";}();
```
This lambda prints the message directly.
Lambda with return:
```cpp
cout << []() { return "\n0"; };
This lambda returns a string ("\n0") and prints it.
```
Generalized lambda for addition:
```cpp
auto sum = [](auto a, auto b) { return a + b; };
```
This lambda function adds two values of any type, demonstrating the flexibility of using auto in lambdas.