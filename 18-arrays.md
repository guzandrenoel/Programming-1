# Arrays

Collections of variables of the same type stored in contiguous memory locations, accessible by a common name and index.

## Declaration and Initialization
| Index | 0 | 1 | 2 | 3 | 4 |
|-------|---|---|---|---|---|
| Value | 10 | 20 | 22 | 19 | 15 |
```c
int myArr[5] = {10, 20, 22, 19, 15};

```
## Accessing Elements

- **Direct Access:**
```c
printf("%d", myArr[2]);  // 22

```
- **Access via loop:**
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", myArr[i]);
}
// Output: 10 20 22 19 15

```

## Multi-dimensional Arrays
```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

printf("%d", matrix[1][2]);  // 6

```

## Using Constants
```c
#define SIZE 5
int main() {
    int myArr[SIZE];
}

```
## Array Bounds
```c
int arr[5] = {1, 2, 3, 4, 5};
// arr[5] = 6;  // ERROR: Array index out of bounds

