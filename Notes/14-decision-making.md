# Decision Making

Decision making structures allow programs to execute different code blocks based on conditions.


## if Statement

Executes a block of code only if the condition is true.

```
if (condition) {
    // code if true
}

```

## if-else

Provides an alternative block of code to execute when the condition is false.

```
if (condition) {
    // true
} else {
    // false
}

```

## else if

Allows checking multiple conditions in sequence.


```
if (cond1) {
    // cond1 true
} else if (cond2) {
    // cond2 true
} else {
    // all false
}
```
## switch Statement

Efficiently checks a variable against multiple constant values.

```
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code if no match
}
```