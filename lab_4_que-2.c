#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("%s\n", (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap Year" : "Not Leap Year");
    return 0;
}
