# Boolean Expressions

A logical statement that evaluates to either **true** or **false**.

## Boolean Values in C

- **Without `stdbool.h`**: Use integers
  - `0` → false  
  - Any non-zero value → true (usually `1`)
- **With `stdbool.h`**: Use proper boolean types
  - `true` → 1
  - `false` → 0

## Basic Examples

```c
#include <stdio.h>

int main() {
    // Using integers as boolean
    int result1 = (5 > 3);  // 1 (true)
    int result2 = (2 == 4); // 0 (false)
    
    printf("5 > 3: %d\n", result1);
    printf("2 == 4: %d\n", result2);
    
    return 0;
}

```

## Using stdbool.h for Clear Code

```c
#include <stdio.h>
#include <stdbool.h>  // Add this for bool, true, false

int main() {
    // Proper boolean variables
    bool isSunny = true;
    bool isRaining = false;
    bool isWarm = (25 > 20);  // true
    
    if (isSunny && !isRaining) {
        printf("Great day for a walk!\n");
    }
    
    printf("Is it warm? %s\n", isWarm ? "Yes" : "No");
    
    return 0;
}

```

## Common Boolean Expressions

```c
int x = 10, y = 5;

// Comparison operators
printf("x > y: %d\n", x > y);    // 1
printf("x == y: %d\n", x == y);  // 0
printf("x != y: %d\n", x != y);  // 1
printf("x <= y: %d\n", x <= y);  // 0

// With stdbool.h - much clearer!
bool isGreater = (x > y);
bool isEqual = (x == y);

```

## Logical Operators

```c
bool a = true, b = false;

printf("a AND b: %d\n", a && b);  // 0 (false)
printf("a OR b: %d\n", a || b);   // 1 (true)
printf("NOT a: %d\n", !a);        // 0 (false)

// Real-world example
int age = 20;
bool hasLicense = true;
bool canDrive = (age >= 18) && hasLicense;  // true

```

---

## Key Points

- Include <stdbool.h> for readable boolean code

- Use bool instead of int for true/false values

- Logical operators: && (AND), || (OR), ! (NOT)

- In conditions, any non-zero value is treated as true