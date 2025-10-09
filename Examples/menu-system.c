#include <stdio.h>

int main() {
    char choice;
    
    do {
        printf("\nMenu:\n");
        printf("(A)dd record\n");
        printf("(D)elete record\n");
        printf("(Q)uit\n");
        printf("Enter your choice: ");
        
        choice = getchar();
        while (getchar() != '\n');  // Clear buffer
        
        switch(choice) {
            case 'A': case 'a':
                printf("Add selected\n");
                break;
            case 'D': case 'd':
                printf("Delete selected\n");
                break;
            case 'Q': case 'q':
                printf("Quitting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 'Q' && choice != 'q');
    
    return 0;
}