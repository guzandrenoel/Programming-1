# Flow Control Statements

Loop control statements change the execution flow within loops.

## break Statement

Exits the loop immediately when encountered.

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  // Exit loop when i reaches 5
    }
    printf("%d ", i);
}
// Output: 0 1 2 3 4

```

## continue Statement

Skips the rest of the current iteration and continues with the next iteration.

```c
for (int i = 0; i <= 10; i++) {
    if (i % 2 != 0) {
        continue;  // Skip odd numbers
    }
    printf("%d ", i);
}
// Output: 0 2 4 6 8 10

```

## return Statement

Exits the current function and optionally returns a value.

```c
int findMax(int a, int b) {
    if (a > b) {
        return a;  // Exit function and return value
    }
    return b;  // Exit function and return value
}

void printMessage() {
    printf("Hello");
    return;  // Exit function (optional for void functions)
    printf("This won't print");  // Unreachable code
}

```

