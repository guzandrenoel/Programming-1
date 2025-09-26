# Functions

Self-contained blocks of code that perform specific tasks. They help in organizing code, reducing redundancy, and improving readability.

## Three Aspects of a Function

- **Function Definition** - Implements the logic
  ```c
  returnType functionName(parameterList) {
      // code and logic
      return value;  // if not void
  }

  ```

- **Function Declaration (Prototype)** - Informs the compiler about the function
  ```c
  returnType functionName(parameterTypes);

  ```

- **Function Call** - Executes the function
   ```c
   functionName(arguments);
   
   ```

## Functions with No Parameters and No Return Values
```c
void display(); // prototype

int main() {
    display();  // call
    return 0;
}

void display() { // definition
    printf("I love Programming");
}

```
## Functions with No Parameters but with Return Values
```c
int computeProduct();

int main() {
    int P = computeProduct();
    printf("%d", P);
    return 0;
}

int computeProduct() {
    int prod = 15 * 24;
    return prod;
}

```
## Functions with Parameters and No Return Values
```c
void displaySum(int, int);

int main() {
    int x = 5, y = 7;
    displaySum(x, y);
    return 0;
}

void displaySum(int a, int b) {
    int sum = a + b;
    printf("%d + %d = %d", a, b, sum);
}

```
### Function Call Flow:

| main() | → | displaySum() |
|--------|---|-------------|
| x = 5  | → | a = 5       |
| y = 7  | → | b = 7       |

## Functions with Parameters and Return Values
```c
int getSum(int, int);

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = getSum(a, b);
    printf("Sum = %d", sum);
    return 0;
}

int getSum(int x, int y) {
    int total = x + y;
    return total;
}

```
### Function Call Flow:
| main() | → | getSum() |
|--------|---|---------|
| a      | → | x       |
| b      | → | y       |
| sum    | ← | total   |