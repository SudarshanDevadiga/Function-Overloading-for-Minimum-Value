# Function Overloading for Minimum Value

A C++ program demonstrating function overloading to find the minimum of two values for different data types.

## Description

This program implements overloaded functions named `min()` to find the minimum of two values. It provides separate implementations for `int`, `double`, and `char` data types, showcasing how function overloading can be used to handle different types with the same function name.

### Key Features
- Function overloading
- Type-specific minimum value calculation
- Simple conditional logic
- Consistent function interface

## Function Overloading Structure

```cpp
int min(int a, int b) {
    return (a < b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

char min(char a, char b) {
    return (a < b) ? a : b;
}
