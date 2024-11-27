#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    printf("Choose a shape to calculate the area:\n");
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle: %.2f\n", PI * radius * radius);
            break;
        }
        case 2: {
            float length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of the rectangle: %.2f\n", length * width);
            break;
        }
        case 3: {
            float base, height;
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of the triangle: %.2f\n", 0.5 * base * height);
            break;
        }
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
