# Ternary (Conditional) Operator

The ternary operator is a shorthand for `if-else` statements.

## Syntax
```c
condition ? expression_if_true : expression_if_false;

int age = 20;
char* status = (age >= 18) ? "Adult" : "Minor";
printf("%s\n", status);  // Output: Adult

int a = 5, b = 3;
int max = (a > b) ? a : b;
printf("Maximum: %d\n", max);  // Output: Maximum: 5

```
## Nested ternary
```
int score = 85;
char grade = (score >= 90) ? 'A' : 
             (score >= 80) ? 'B' : 
             (score >= 70) ? 'C' : 'F';
printf("Grade: %c\n", grade);  // Output: Grade: B

```