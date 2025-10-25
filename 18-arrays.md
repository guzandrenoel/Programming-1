# Arrays

A collection of variables of the same type stored in **contiguous memory locations**, accessible by a common name and index.

## Declaration and Initialization

```c
int myArr[5] = {10, 20, 22, 19, 15};

```

| Index | 0 | 1 | 2 | 3 | 4 |
|-------|---|---|---|---|---|
| Value | 10 | 20 | 22 | 19 | 15 |

### Accessing Elements

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

# Multi-dimensional Arrays

Arrays with more than one dimension, often used to represent tables or matrices.

## Declaration and Initialization

```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

```

| Index | 0 | 1 | 2 |
|--------|---|---|---|
| 0      | 1 | 2 | 3 |
| 1      | 4 | 5 | 6 |

### Accessing Elements

- **Direct Access:**
```c
printf("%d\n", matrix[1][2]);  // 6

printf("%d\n", matrix[0][1]); // 2

printf("%d\n", matrix[1][0]); // 4

```

- **Access via Nested loops:**
```c
for (int i = 0; i < 2; i++) {        // Rows
    for (int j = 0; j < 3; j++) {    // Columns
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}

/* 
Output:
1 2 3
4 5 6
*/

```

---

## Constants

Constants are fixed values that **do not change during program execution**.  

### `#define` 

Used to create symbolic constants or macros before compilation; performs text replacement with no data type.

```c
#include <stdio.h>

#define SIZE 5  // Named constant for array size

int main() {
    int myArr[SIZE] = {1, 2, 3, 4, 5};

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", myArr[i]);
    }

    return 0;
}
// Output: 1 2 3 4 5


```

### `const`

Declares a typed variable whose value cannot change during program execution; offers type safety and clarity.

```c
#include <stdio.h>

int main() {
    const int SIZE = 5;  // Constant variable
    int myArr[SIZE] = {10, 20, 30, 40, 50};

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", myArr[i]);
    }

    return 0;
}
// Output: 10 20 30 40 50

```

---

## Array Bounds

The valid range of indices that can be used to access array elements.

```c
int arr[5] = {1, 2, 3, 4, 5};
// arr[5] = 6;  // ERROR: Array index out of bounds
// arr[-1] = 0; // ERROR: Invalid index

```

---

## Array Demonstration (1D and 2D)

```c
#include <stdio.h>

#define SIZE 5
#define ROWS 2
#define COLS 3

int main() {
    // 1D Array
    int scores[SIZE] = {95, 87, 92, 78, 85};
    
    printf("Student Scores:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Student %d: %d\n", i + 1, scores[i]);
    }
    
    // Access specific element
    printf("\nThird student's score: %d\n", scores[2]);
    
    // 2D Array - Student grades for multiple subjects
    int grades[ROWS][COLS] = {
        {85, 92, 78},  // Student 1: Math, Science, English
        {90, 88, 95}   // Student 2: Math, Science, English
    };
    
    printf("\nStudent Grades:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < COLS; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
    
    // Access specific grade
    printf("\nStudent 2's English grade: %d\n", grades[1][2]);
    
    // Array bounds demonstration
    printf("\nValid indices for scores array: 0 to %d\n", SIZE - 1);
    printf("Valid indices for grades array: [0-%d][0-%d]\n", ROWS - 1, COLS - 1);
    
    return 0;
}

/* Output:
Student Scores:
Student 1: 95
Student 2: 87
Student 3: 92
Student 4: 78
Student 5: 85

Third student's score: 92

Student Grades:
Student 1: 85 92 78
Student 2: 90 88 95

Student 2's English grade: 95

Valid indices for scores array: 0 to 4
Valid indices for grades array: [0-1][0-2]
*/

```