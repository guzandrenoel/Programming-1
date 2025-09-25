# Escape Sequences

Escape sequences are special character combinations used to represent characters that are difficult to type directly or have special meaning in strings.

## Common Escape Sequences

| Escape Sequence | Description | Example | Output |
|-----------------|-------------|---------|--------|
| `\n` | New line | `printf("Hello\nWorld");` | Hello<br>World |
| `\t` | Horizontal tab | `printf("Name:\tJohn");` | Name:&nbsp;&nbsp;&nbsp;&nbsp;John |
| `\\` | Backslash | `printf("Path: C:\\Users\\");` | Path: C:\Users\ |
| `\"` | Double quote | `printf("She said \"Hello\"");` | She said "Hello" |
| `\'` | Single quote | `printf("It\'s sunny");` | It's sunny |
| `\0` | Null character | `char str[] = "Hello\0";` | (String terminator) |
| `\b` | Backspace | `printf("Hello\b");` | Hell |
| `\r` | Carriage return | `printf("Hello\rWorld");` | World |

## Example Usage
```c
#include <stdio.h>

int main() {
    printf("Escape Sequences Examples:\n");
    printf("New line: Line 1\nLine 2\n");
    printf("Tab: Name\tAge\tSalary\n");
    printf("Quotes: She said \"Hello!\"\n");
    printf("Backslash: Path: C:\\Program Files\\\n");
    printf("Combined: Name: \"John\"\tAge: 25\tSalary: $5000.00\n");
    return 0;
}