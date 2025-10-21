# Format Specifiers

Format specifiers are used with `printf()` and `scanf()` functions to specify the type of data being input or output.

## Common Format Specifiers

| Specifier | Usage | Example |
|-----------|-------|---------|
| `%d` | Integer | `int age = 25; printf("%d", age);` |
| `%s` | String | `char name[] = "John"; printf("%s", name);` |
| `%f` | Float | `float price = 19.99; printf("%f", price);` |
| `%lf` | Double | `double pi = 3.14159; printf("%lf", pi);` |
| `%c` | Character | `char grade = 'A'; printf("%c", grade);` |
| `%p` | Pointer address | `int x = 10; printf("%p", &x);` |
| `%ld` | Long integer | `long bigNum = 1000000L; printf("%ld", bigNum);` |
| `%x` | Hexadecimal | `int num = 255; printf("%x", num); // ff` |
| `%zu` | `size_t` type | `printf("%zu", sizeof(int)); // 4` |

---

## Format Specifiers with Precision

```c
// Float with 2 decimal places
float gpa = 3.75;
printf("GPA: %.2f", gpa);  // Output: GPA: 3.75

// Integer with minimum width
int number = 42;
printf("Number: %5d", number);  // Output: Number:    42

// String with limited characters
char text[] = "Hello World";
printf("Text: %.5s", text);  // Output: Text: Hello

// Leading zeros
int code = 42;
printf("Code: %04d", code);  // Output: Code: 0042

```

---

## About %zu

%zu is specifically for size_t values returned by sizeof, strlen, etc.

```c
char name[] = "Hello";
printf("Length: %zu\n", strlen(name));  // 5
printf("Size: %zu\n", sizeof(name));    // 6

```

## Complete Example

```c
#include <stdio.h>

int main() {
    int students = 42;
    float average = 85.5678;
    char school[] = "Programming Academy";
    
    printf("Students: %5d\n", students);
    printf("Average: %.1f%%\n", average);
    printf("School: %.11s\n", school);
    
    return 0;
}

/* Output:
Students:    42
Average: 85.6%
School: Programming
*/

```

---

## Key Points

- Precision (.2f) controls decimal places

- Width (%5d) adds padding for alignment

- %zu is for sizes and lengths (sizeof, strlen)

- Combine width and precision: %8.2f