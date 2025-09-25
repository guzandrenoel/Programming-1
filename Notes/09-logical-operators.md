# Logical Operators

Logical operators combine boolean expressions and return a boolean result.

| Operator | Description | Example | Result |
|----------|-------------|---------|--------|
| `&&` | AND | `(5 > 3) && (2 < 4)` | `1` (true) |
| `\|\|` | OR | `(5 > 3) \|\| (2 > 4)` | `1` (true) |
| `!` | NOT | `!(5 > 3)` | `0` (false) |

## Truth Tables

### AND (`&&`)
| A | B | A && B |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### OR (`||`)
| A | B | A \|\| B |
|---|---|----------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### NOT (`!`)
| A | !A |
|---|----|
| 0 | 1 |
| 1 | 0 |

## Example
```c
#include <stdio.h>

int main() {
    int age = 25;
    int hasLicense = 1;
    
    if (age >= 18 && hasLicense) {
        printf("You can drive!\n");
    }
    
    if (age < 18 || !hasLicense) {
        printf("You cannot drive.\n");
    }
    
    return 0;
}