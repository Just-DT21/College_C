#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    float x1, y1, x2, y2;
    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);
    printf("Distance: %.2f\n", distance(x1, y1, x2, y2));
    return 0;
}