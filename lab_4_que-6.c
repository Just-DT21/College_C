#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, s, area;
    printf("Enter sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Valid triangle, Area: %.2f\n", area);
    } else
        printf("Not a valid triangle\n");
    return 0;
}
