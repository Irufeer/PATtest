#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double W[3], T[3], L[3], sum = 1;
int main()
{
    for (int i = 0; i < 3; i++) {
        scanf("%lf%lf%lf", &W[i], &T[i], &L[i]);
    }
    for (int i = 0; i < 3; i++) {
        if (W[i] >= T[i] && W[i] >= L[i]) { printf("W "); sum *= W[i]; }
        else if (T[i] >= W[i] && T[i] >= L[i]) { printf("T "); sum *= T[i]; }
        else if (L[i] >= W[i] && L[i] >= T[i]) { printf("L "); sum *= L[i]; }
    }
    printf("%.2lf\n", (sum*0.65-1)*2);
}

