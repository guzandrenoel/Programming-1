# Header Files

- `#include` – Tells the compiler to include function prototypes and type definitions from headers
- Common headers:
  - `<stdio.h>` – Input/output functions (`printf`, `scanf`, `getchar`)
  - `<stdlib.h>` – Memory allocation, number/string conversion (`malloc`, `free`, `atoi`)
  - `<string.h>` – String manipulation functions (`strcpy`, `strlen`, `strcmp`)
  - `<math.h>` – Mathematical functions (`sqrt`, `pow`, `sin`)
  - `<stdbool.h>` – Boolean type support (`bool`, `true`, `false`)
  - `<ctype.h>` – Character handling functions (`isalpha`, `isdigit`, `toupper`)

## Example 
```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    strcpy(name, "Alice");
    printf("Hello, %s!\n", name);
    return 0;
}

```

## Key Points

- Header files provide function declarations, not implementations

- Always include necessary headers for the functions you use

- System headers use < >, your own headers use " "