# Ternary (Conditional) Operator

The ternary operator is a shorthand for `if-else` statements.

```c
condition ? expression_if_true : expression_if_false;

```

## Example
```c
int a = 5, b = 3;
int max = (a > b) ? a : b;
printf("Maximum: %d\n", max);  // Output: Maximum: 5

```
## Nested ternary
```c
int score = 85;
char grade = (score >= 90) ? 'A' : 
             (score >= 80) ? 'B' : 
             (score >= 70) ? 'C' : 'F';
printf("Grade: %c\n", grade);  // Output: Grade: B

```