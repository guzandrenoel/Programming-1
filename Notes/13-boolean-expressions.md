# Boolean Expressions

A logical statement in computing that evaluates to one of two values: True or False.

- `0` → false  
- Non-zero (usually `1`) → true  

## Example
```c
int result;
result = (5 > 3);  // 1
result = (2 == 4); // 0

```

## Boolean in Conditions
```c
#include <stdio.h>
#include <stdbool.h>  // For bool type

int main() {
    int x = 10;
    
    // Any non-zero value is true
    if (x) {
        printf("x is true (non-zero)\n");
    }
    
    // Explicit boolean
    bool isTrue = 1;
    bool isFalse = 0;
    
    if (isTrue) {
        printf("This will print\n");
    }
    
    if (!isFalse) {
        printf("This will also print\n");
    }
    
    return 0;
}

```


## Common Boolean Expressions
```c
int a = 5, b = 3;
printf("a > b: %d\n", a > b);      // 1
printf("a == b: %d\n", a == b);    // 0
printf("a != b: %d\n", a != b);    // 1
printf("a <= b: %d\n", a <= b);    // 0

```