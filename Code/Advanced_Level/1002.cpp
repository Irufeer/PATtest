#include <cstdio>
int t, exponent;
double coefficient, numbers[1005];
int main()
{
    for (int i = 0; i < 2; i++) {
        scanf("%d", &t);
        while (t--) {
            scanf("%d%lf", &exponent, &coefficient);
            numbers[exponent] += coefficient;
        }
    }
    t = 0;
    for (int i = 0; i <= 1000; i++) {
        if (numbers[i]) {
            t++;
        }
    }
    printf("%d", t);
    for (int i = 1000; i >= 0; i--) {
        if (numbers[i]) {
            printf(" %d %.1lf", i, numbers[i]);
        }
    }
    printf("\n");
}

