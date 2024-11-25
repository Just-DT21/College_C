#include <stdio.h>

void convert_seconds(int seconds) {
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
}

int main() {
    int seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    convert_seconds(seconds);
    return 0;
}