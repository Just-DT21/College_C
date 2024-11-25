#include <stdio.h>
#include <math.h>

float area_of_circle(float radius) {
    return M_PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle: %.2f\n", area_of_circle(radius));
    return 0;
}