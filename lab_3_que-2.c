#include <stdio.h>

float fahrenheit_to_centigrade(float f) {
    return (5.0 / 9) * (f - 32);
}

float centigrade_to_fahrenheit(float c) {
    return (9.0 / 5) * c + 32;
}

int main() {
    float temp;
    char unit;
    printf("Enter temperature: ");
    scanf("%f", &temp);
    printf("Is it in Fahrenheit (F) or Centigrade (C)? ");
    scanf(" %c", &unit);

    if (unit == 'F' || unit == 'f') {
        printf("Temperature in Centigrade: %.2f\n", fahrenheit_to_centigrade(temp));
    } else if (unit == 'C' || unit == 'c') {
        printf("Temperature in Fahrenheit: %.2f\n", centigrade_to_fahrenheit(temp));
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}