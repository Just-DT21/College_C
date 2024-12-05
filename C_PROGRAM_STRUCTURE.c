#include <stdio.h>
#include <string.h>

// Function prototypes
void demonstrateOperators();
void demonstrateControlFlow();
void demonstrateArrays();
void linearSearch();
void bubbleSort();
void stringManipulation();

int main() {
    int choice;

    // Main menu
    do {
        printf("\nC Program Demonstration\n");
        printf("1. Demonstrate Operators\n");
        printf("2. Demonstrate Control Flow\n");
        printf("3. Demonstrate Arrays\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                demonstrateOperators();
                break;
            case 2:
                demonstrateControlFlow();
                break;
            case 3:
                demonstrateArrays();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void demonstrateOperators() {
    int a = 10, b = 20;
    printf("\nDemonstrating Operators\n");

    // Arithmetic operators
    printf("Arithmetic Operators: %d + %d = %d\n", a, b, a + b);

    // Relational operators
    printf("Relational Operators: %d > %d = %d\n", a, b, a > b);

    // Logical operators
    printf("Logical Operators: (%d > 5 && %d < 30) = %d\n", a, b, (a > 5 && b < 30));

    // Bitwise operators
    printf("Bitwise Operators: %d & %d = %d\n", a, b, a & b);

    // Conditional operator
    printf("Conditional Operator: %s\n", (a > b) ? "a is greater" : "b is greater");
}

void demonstrateControlFlow() {
    printf("\nDemonstrating Control Flow\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Decision statements
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // Loop demonstration
    printf("Numbers from 1 to %d using for loop:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void demonstrateArrays() {
    int subChoice;
    printf("\nArray Operations\n");
    printf("1. Linear Search\n");
    printf("2. Bubble Sort\n");
    printf("3. String Manipulation\n");
    printf("Enter your choice: ");
    scanf("%d", &subChoice);

    switch (subChoice) {
        case 1:
            linearSearch();
            break;
        case 2:
            bubbleSort();
            break;
        case 3:
            stringManipulation();
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void linearSearch() {
    int arr[10], n, key, found = 0;
    printf("\nLinear Search\n");
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Key not found.\n");
    }
}

void bubbleSort() {
    int arr[10], n, temp;
    printf("\nBubble Sort\n");
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void stringManipulation() {
    char str1[50], str2[50];
    printf("\nString Manipulation\n");

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Length of first string: %lu\n", strlen(str1));
    strcpy(str1, str2);
    printf("After copying, first string: %s\n", str1);
}
