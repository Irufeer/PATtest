#include <stdio.h>

int main ()
{
    int coefficient, exponent, flag = 1;
    while(scanf("%d %d",&coefficient, &exponent) != EOF) {
        if (exponent > 0) {
            if (flag) {
                printf("%d %d", coefficient*exponent, exponent-1);
                flag = 0;
            } else {
                printf(" %d %d",coefficient*exponent,exponent-1);
            }
        }
    }
    if(flag == 1)
        printf("0 0");
    return 0;
}

