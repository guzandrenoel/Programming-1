# Three types of Control Structures 

Programming statements that regulate a program's execution flow by dictating the order in which instructions are carried out, allowing for conditional execution and repetition.

## 1. Sequential/Composition

Sequence of statements are executed in order of appearance.

```c
int x = 5;
x = x + 3;
printf("%d", x);  // Executed in order: 5 → 8 → print 8

```
## 2. Conditional/Selection

Executes different paths based on a condition. (`if`, `else if`, `else`, `switch`)

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

Sequence of statements may be executed repeatedly, zero or more.

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





