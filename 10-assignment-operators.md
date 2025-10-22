# Assignment Operators

## Simple Assignment (`=`)

It is used to assign a value to a variable. 

```c
int x = 10;

```

## Compound Assignment Operators

Compound assignment operators perform an operation and assignment in one step.

| Operator | Description | Example | Equivalent To |
|----------|-------------|---------|---------------|
| `+=` | Addition assignment | `x += 5` | `x = x + 5` |
| `-=` | Subtraction assignment | `x -= 3` | `x = x - 3` |
| `*=` | Multiplication assignment | `x *= 2` | `x = x * 2` |
| `/=` | Division assignment | `x /= 4` | `x = x / 4` |
| `%=` | Modulus assignment | `x %= 3` | `x = x % 3` |


```c
#include <stdio.h>

int main() {
    int x = 10;
    
    x += 5;   // x = 15
    x -= 3;   // x = 12
    x *= 2;   // x = 24
    x /= 4;   // x = 6
    x %= 5;   // x = 1
    
    printf("Final value: %d\n", x);  // Output: 1
    
    return 0;
}