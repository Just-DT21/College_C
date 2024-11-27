#include <stdio.h>

int main() {
    int choice;
    printf("Choose a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose option 1\n");
        case 2:
            printf("You chose option 2\n");
        case 3:
            printf("You chose option 3\n");
        default:
            printf("End of options\n");
    }
    return 0;
}
