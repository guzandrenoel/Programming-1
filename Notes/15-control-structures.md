# Control Structures 

Programming statements that regulate a program's execution flow by dictating the order in which instructions are carried out, allowing for conditional execution and repetition.

## 1. Sequence
Statements are executed in the order they appear.

```c
int x = 5;
x = x + 3;
printf("%d", x);  // Executed in order: 5 → 8 → print 8

```
## 2. Conditional
Execution depends on conditions.

```c
// if statement
if (x > 0) {
    printf("Positive");
}

// switch statement
switch (x) {
    case 1: printf("One"); break;
    case 2: printf("Two"); break;
}
```
## 3. Iteration (Loops)
Statements are executed repeatedly.

```c
// for loop
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}

// while loop
while (x > 0) {
    printf("%d ", x);
    x--;
}

// do-while loop
do {
    printf("%d ", x);
    x++;
} while (x < 5);

```





