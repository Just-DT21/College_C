#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = (N % 2 == 0 ? N - 1 : N); i > 0; i -= 2)
        printf("%d ", i);
    return 0;
}
