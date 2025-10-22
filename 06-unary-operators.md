# Unary Operators

Unary operators perform an operation using only a single operand (variable or value).

## Increment/Decrement Prefix (`++x`, `--x`) 

The variable is modified first, then its new value is returned.

```c
// Prefix (`++x`, `--x`) Variable changed before use:

int x = 5;
int y = ++x;  // x=6, y=6

```

## Increment/Decrement Postfix (x++, x--) Operators

The variable's original value is used in the expression, and then the variable is modified afterwards. 

```c
// Postfix (x++, x--) Variable changed after use:

int x = 5;
int y = x++;  // x=6, y=5

```

## sizeof() Operator

An operator that returns the size in bytes of a variable or data type.

```c
int age;
printf("sizeof(int) = %zu bytes", sizeof(age));  // Output: sizeof(int) = 4 bytes

double salary;
printf("sizeof(double) = %zu bytes", sizeof(salary));  // Output: 8 bytes

// Can be used with data types directly
printf("Size of char: %zu", sizeof(char));  // Output: 1
printf("Size of float: %zu", sizeof(float));  // Output: 4

```