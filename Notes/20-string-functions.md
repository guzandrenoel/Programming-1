# String Functions

Built-in functions from the string.h library for manipulating and working with strings.

## strcat() – Concatenation

```c
#include <string.h>
char str1[50] = "Hello, ";
char str2[] = "World";
strcat(str1, str2);
printf("%s", str1);  // Hello, World

```

## strcmp() – Comparison
```c
int result = strcmp(str1, str2);
// 0: equal, <0: str1 < str2, >0: str1 > str2

```

## strlen() – Length
```c
char str[] = "Hello, World!";
int length = strlen(str);  // 13

```

## strcpy() – Copy
```c
char src[] = "Source String";
char dest[20];
strcpy(dest, src);
printf("Copied: %s", dest);

```

### Example
```c
#include <stdio.h>
#include <string.h>

int main() {
    char firstName[20] = "John";
    char lastName[20] = "Doe";
    char fullName[40];
    
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    
    printf("Full name: %s\n", fullName);
    printf("Length: %zu\n", strlen(fullName));
    
    return 0;
}