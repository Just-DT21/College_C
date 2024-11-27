#include <stdio.h>
int main() {
    int score;
    printf("Enter quiz score (0-10): ");
    scanf("%d", &score);
    if (score >= 9)
        printf("Grade: A\n");
    else if (score >= 7)
        printf("Grade: B\n");
    else if (score >= 5)
        printf("Grade: C\n");
    else if (score >= 3)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    return 0;
}
