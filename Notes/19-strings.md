# Strings

Arrays of characters ending with a null terminator (`\0`). Used for storing and manipulating text.

## Declaration

```c
char str[5] = "USC";

```

| Index | 0 | 1 | 2 | 3 |
|-------|---|---|---|---|
| Char | U | S | C | \0 | \0 |

## String Initialization
```c
char str1[] = "Hello";  // Automatic size (6)
char str2[10] = "World"; // Fixed size
char str3[] = {'H', 'i', '\0'}; // Manual
```

## String Input/Output
```c
char name[50];

// Unsafe (buffer overflow risk)
scanf("%s", name);

// Safe input with fgets()
fgets(name, sizeof(name), stdin);

// Output
printf("Hello %s", name);

```

## Reading Strings with fgets()
```c
fgets(stringName, sizeof(stringName), stdin);
size_t len = strlen(stringName);
if (len > 0 && stringName[len-1] == '\n')
    stringName[len-1] = '\0';

```

