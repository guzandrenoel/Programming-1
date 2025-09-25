# Relational Operators

Relational operators compare two values and return a boolean result (1 for true, 0 for false).

| Operator | Description | Example | Result |
|----------|-------------|---------|--------|
| `==` | Equal to | `5 == 3` | `0` (false) |
| `!=` | Not equal to | `5 != 3` | `1` (true) |
| `<` | Less than | `5 < 3` | `0` (false) |
| `>` | Greater than | `5 > 3` | `1` (true) |
| `<=` | Less than or equal to | `5 <= 5` | `1` (true) |
| `>=` | Greater than or equal to | `5 >= 3` | `1` (true) |

## Example
```c
#include <stdio.h>

int main() {
    int x = 5, y = 3;
    
    printf("x == y: %d\n", x == y);  // 0
    printf("x != y: %d\n", x != y);  // 1
    printf("x < y: %d\n", x < y);    // 0
    printf("x > y: %d\n", x > y);    // 1
    printf("x <= y: %d\n", x <= y);  // 0
    printf("x >= y: %d\n", x >= y);  // 1
    
    return 0;
}