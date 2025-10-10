#include <stdio.h>

int main() {
    int num;
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; i++) {
        num /= 10;
    }
    
    printf("Number of digits: %d", i);
    return 0;
}