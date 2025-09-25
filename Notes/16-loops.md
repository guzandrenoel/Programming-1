# Loops

Control flow statements that allow a block of code to be executed repeatedly until a specified condition is met. They are essential for performing repetitive tasks efficiently. 

## while Loop

Evaluates condition before execution.

```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
// Output: 1 2 3 4 5
```

## do-while Loop

Executes at least once, then checks condition.

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5

```

## for Loop

Compact loop with initialization, condition, and increment.

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
// Output: 1 2 3 4 5

```

### Nested Loops

```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        printf("(%d,%d) ", i, j);
    }
    printf("\n");
}
// Output: (1,1) (1,2)
//         (2,1) (2,2) 
//         (3,1) (3,2)
