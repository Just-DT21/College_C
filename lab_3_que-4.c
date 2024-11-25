#include <stdio.h>

void convert_distance(float mm) {
    float cm = mm / 10;
    float inch = mm / 25.4;
    float feet = mm / (25.4 * 12);
    printf("Centimeters: %.2f, Inches: %.2f, Feet: %.2f\n", cm, inch, feet);
}

int main() {
    float mm;
    printf("Enter distance in mm: ");
    scanf("%f", &mm);
    convert_distance(mm);
    return 0;
}