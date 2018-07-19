#include <stdio.h>

int main ()
{
    char str[85][85];
    int cnt = 0;
    while (scanf("%s", str[cnt]) != EOF)
        cnt++;
    while (--cnt)
        printf("%s ", str[cnt]);
    printf("%s\n", str[0]);
    return 0;
}

