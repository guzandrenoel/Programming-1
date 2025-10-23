# Boolean Expressions

A logical statement that evaluates to either **true** or **false**.

## Boolean Values in C

- **Without `stdbool.h`**: Use integers
  - `0` → false  
  - Any non-zero value → true (usually `1`)

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

---

- **With `stdbool.h`**: Use proper boolean types
  - `false` → 0
  - `true` → 1

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

---

## Common Boolean Expressions

### Comparison operators

```c
#include <stdio.h>

int main() {
    int x = 10, y = 5;

    printf("x > y: %d\n", x > y);     // 1 (true)
    printf("x == y: %d\n", x == y);   // 0 (false)
    printf("x != y: %d\n", x != y);   // 1 (true)
    printf("x <= y: %d\n", x <= y);   // 0 (false)

    return 0;
}

```

### With stdbool.h 

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 10, y = 5;

    bool isGreater = (x > y);
    bool isEqual = (x == y);

    printf("isGreater: %d\n", isGreater);  // 1 (true)
    printf("isEqual: %d\n", isEqual);      // 0 (false)

    return 0;
}

```

### Logical Operators

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true, b = false;

    printf("a AND b: %d\n", a && b);  // 0 (false)
    printf("a OR b: %d\n", a || b);   // 1 (true)
    printf("NOT a: %d\n", !a);        // 0 (false)

    return 0;
}
     // 0 (false)

```

### Real-world example

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 20;
    bool hasLicense = true;

    bool canDrive = (age >= 18) && hasLicense;

    printf("Can drive: %d\n", canDrive);  // 1 (true)

    return 0;
}


```

---

## Key Points

- Include <stdbool.h> for readable boolean code

- Use bool instead of int for true/false values

- Logical operators: && (AND), || (OR), ! (NOT)

- In conditions, any non-zero value is treated as true