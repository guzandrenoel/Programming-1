# Decision Making

Decision making structures allow programs to execute different code blocks based on conditions.


## if Statement

Executes a block of code only if the condition is true.

```c
if (condition) {
    // code if true
}

```

## if-else

Provides an alternative block of code to execute when the condition is false.

```c
if (condition) {
    // true
} else {
    // false
}

```

## else if

Allows checking multiple conditions in sequence.


```c
if (cond1) {
    // cond1 true
} else if (cond2) {
    // cond2 true
} else {
    // all false
}
```
## switch Statement

Efficiently checks a variable against multiple constant values.

```c
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code if no match
}
```

```c
#include <stdio.h>

int main() {
    int grade = 85;
    
    // if-else if ladder
    if (grade >= 90) {
        printf("A\n");
    } else if (grade >= 80) {
        printf("B\n");
    } else if (grade >= 70) {
        printf("C\n");
    } else {
        printf("F\n");
    }
    
    // switch statement
    char operation = '+';
    int x = 10, y = 5;
    
    switch (operation) {
        case '+':
            printf("Sum: %d\n", x + y);
            break;
        case '-':
            printf("Difference: %d\n", x - y);
            break;
        case '*':
            printf("Product: %d\n", x * y);
            break;
        default:
            printf("Unknown operation\n");
    }
    
    return 0;
}