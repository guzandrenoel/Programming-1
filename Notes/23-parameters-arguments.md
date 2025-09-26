# Parameters vs Arguments

## Parameter

Variables listed inside the parentheses of a function.

**Purpose:** They act as placeholders to receive values when the function is called.

```c
int findSquare(int num) {  // 'num' is a parameter
    return num * num;
}

```

## Argument

The actual variables or values passed to a function.

**Purpose:** They provide the data that the function works on.

```c
int x = 5;
int square = findSquare(x);  // 'x' is an argument
```

## Parameter Passing Mechanisms

### Pass by Value/Copy

- The changes made to the parameter do not affect the argument

- A copy of the argument's value is passed to the function

```c
void swapVal(int a, int b);

void main() {
    int x = 10, y = 20;  // Arguments (Actual Parameters)
    printf("Before swap: x = %d, y = %d", x, y);
    swapVal(x, y);
    printf("\nAfter swap: x = %d, y = %d", x, y);
}

void swapVal(int a, int b) {  // Parameters (Formal Parameters)
    int temp;
    temp = a;
    a = b;
    b = temp;
}

``` 

### Output:
```c
Before swap: x = 10, y = 20
After swap: x = 10, y = 20
// Note: The original values remain unchanged because only copies were modified.
```
