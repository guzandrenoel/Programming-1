# Pointers and Addresses

Fundamental concepts for understanding how data is stored and manipulated in memory.

## Pointer

A variable that directly points to the address of another variable.

```c
dataType *variableName;

int var = 10;
int *ptr = &var;

printf("%d", *ptr); // Value of *ptr = 10 
printf("%d", ptr); // Value of ptr = A100 

```
| Variable | Value | Address | Pointer |
|----------|-------|---------|---------|
| var      | 10    | A100    |         |
| ptr      | A100  | A000    | → var   |

## Address

The location of a variable in memory represented as a unique identifier.

```c
&variableName;

int x = 10;
int y = 7;

printf("%p", &x); // Value of &x = A100 
printf("%p", &y); // Value of &y = A200 

```
| Variable | Value | Address |
|----------|-------|---------|
| x        | 10    | A100    |
| y        | 7     | A200    |

```c
// Note: These addresses are arbitrary since only the operating system knows the actual memory locations.
```

