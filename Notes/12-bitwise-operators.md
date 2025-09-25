# Bitwise Operators

Bitwise operators work on individual bits of integer values.

| Operator | Description | Example | Result |
|----------|-------------|---------|--------|
| `&` | AND | `5 & 3` | `1` (0101 & 0011 = 0001) |
| `\|` | OR | `5 \| 3` | `7` (0101 \| 0011 = 0111) |
| `^` | XOR | `5 ^ 3` | `6` (0101 ^ 0011 = 0110) |
| `~` | NOT | `~5` | `-6` (inverts all bits) |
| `<<` | Left shift | `5 << 1` | `10` (0101 << 1 = 1010) |
| `>>` | Right shift | `5 >> 1` | `2` (0101 >> 1 = 0010) |

## Example
```c
#include <stdio.h>

int main() {
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011
    
    printf("a & b = %d\n", a & b);  // 1 (0001)
    printf("a | b = %d\n", a | b);  // 7 (0111)
    printf("a ^ b = %d\n", a ^ b);  // 6 (0110)
    printf("~a = %d\n", ~a);        // -6
    printf("a << 1 = %d\n", a << 1); // 10 (1010)
    printf("a >> 1 = %d\n", a >> 1); // 2 (0010)
    
    return 0;
}