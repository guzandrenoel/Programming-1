# Variables

Variables are named storage locations in memory used to hold data, and data types specify the kind of data a variable can store and the amount of memory it occupies.


## Variable Declaration and Assignment
| Declaration | Initialization | Assignment |
|-------------|----------------|------------|
| `int age;`  | `int age = 25;` | `age = 14;` |

# Data Types

Classifies the type of data a variable can hold, determining the range of values and the operations that can be performed on it. 

## Primary Data Types
- `int` – integer (4 bytes)
- `char` – single character (1 byte)
- `float` – decimal number (4 bytes, ~7 digits precision)
- `double` – larger decimal number (8 bytes, ~15 digits precision)
- `void` – no value
- `int*`, `char*`, etc. – pointer types (8 bytes)

```c
int age = 25;
char grade = 'A';
char name[] = "Anytime";
float gpa = 2.05;
double precise_gpa = 2.05;