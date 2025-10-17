# Arrays

A collection of variables of the same type stored in **contiguous memory locations**, accessible by a common name and index.

## Declaration and Initialization

```c
int myArr[5] = {10, 20, 22, 19, 15};

```

| Index | 0 | 1 | 2 | 3 | 4 |
|-------|---|---|---|---|---|
| Value | 10 | 20 | 22 | 19 | 15 |

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

---

## Multi-dimensional Arrays

Arrays with more than one dimension, often used to represent tables or matrices.

```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

printf("%d", matrix[1][2]);  // 6

```

| Index | 0 | 1 | 2 |
|--------|---|---|---|
| 0      | 1 | 2 | 3 |
| 1      | 4 | 5 | 6 |

### Accessing elements:

- matrix[0][1] → 2 (Row 0, Column 1)

- matrix[1][2] → 6 (Row 1, Column 2)

- matrix[1][0] → 4 (Row 1, Column 0)

---

## Using Constants

Using named constants for array sizes to improve code maintainability.

```c
#include <stdio.h>

#define SIZE 5

int main() {
    int myArr[SIZE] = {1, 2, 3, 4, 5};
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", myArr[i]);
    }
    return 0;
}

// Output: 1 2 3 4 5 

```

## Array Bounds

The valid range of indices that can be used to access array elements.

```c
int arr[5] = {1, 2, 3, 4, 5};
// arr[5] = 6;  // ERROR: Array index out of bounds
// arr[-1] = 0; // ERROR: Invalid index

