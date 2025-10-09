# String Functions

Built-in functions from the string.h library for manipulating and working with strings.

## strcat() – Concatenation

```c
#include <string.h>

char str1[50] = "Hello, ";
char str2[] = "World";
strcat(str1, str2);  // Appends str2 to str1
printf("%s", str1);  // Output: Hello, World

```

## strcmp() – Comparison
```c
#include <string.h>

char str1[] = "apple";
char str2[] = "banana";
int result = strcmp(str1, str2);

// Returns: 
// 0  - strings are equal
// <0 - str1 comes before str2 alphabetically  
// >0 - str1 comes after str2 alphabetically

if (result == 0) {
    printf("Strings are equal\n");
} else if (result < 0) {
    printf("str1 comes before str2\n");
} else {
    printf("str1 comes after str2\n");
}

```

## strlen() – Length
```c
#include <string.h>

char str[] = "Hello, World!";
int length = strlen(str);  // Returns 13 (excluding null terminator)
printf("Length: %d", length);

```

## strcpy() – Copy
```c
#include <string.h>

char src[] = "Source String";
char dest[20];
strcpy(dest, src);  // Copies src to dest
printf("Copied: %s", dest);  // Output: Copied: Source String

```

### Example
```c
#include <stdio.h>
#include <string.h>

int main() {
    char firstName[20] = "John";
    char lastName[20] = "Doe";
    char fullName[40];
    
    // Build full name
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    
    printf("Full name: %s\n", fullName);
    printf("Length: %zu\n", strlen(fullName));
    
    // Compare names
    if (strcmp(firstName, lastName) == 0) {
        printf("Names are identical\n");
    } else {
        printf("Names are different\n");
    }
    
    return 0;
}

```

