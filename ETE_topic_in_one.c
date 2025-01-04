#include <stdio.h>
#include <string.h>

// Enumerated Data Type
enum Days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

// Structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function Declaration
void displayStudent(struct Student s);
int factorial(int n); // Recursive Function
void arrayAndPointerDemo(int arr[], int size);

int main() {
    // Variables and Data Types
    int num = 5;       // Integer
    float pi = 3.14;   // Float
    char grade = 'A';  // Character
    enum Days today = Friday; // Enum usage

    // Input and Output
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Decision-Making Control Statements
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    // Loop
    printf("Numbers from 1 to %d:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Array and Pointer
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrayAndPointerDemo(arr, size);

    // Function
    printf("Factorial of %d is %d\n", num, factorial(num));

    // Structure
    struct Student student1 = {1, "Alice", 85.5};
    displayStudent(student1);

    // Enum usage
    printf("Today is day %d of the week.\n", today + 1);

    return 0;
}

// Function Definition
void displayStudent(struct Student s) {
    printf("Student Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

// Recursive Function for Factorial
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

// Array and Pointer Demo
void arrayAndPointerDemo(int arr[], int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Pointer usage
    int *ptr = arr;
    printf("Using pointer to access array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
return 0;
}