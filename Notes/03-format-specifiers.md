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
