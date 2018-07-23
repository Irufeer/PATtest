#include <stdio.h>

int main () {
    int a, b, cnt = 0, num[5];
    scanf("%d%d", &a, &b);
    a = a + b;
    if (a == 0) {
        printf("0");
        return 0;
    }
    else if (a < 0) {
        printf("-");
        a = -a;
    }
    while (a) {
        num[cnt++] = a % 1000;
        a /= 1000;
    }
    for (int i = cnt-1; i >= 0; i--) {
        if (i == cnt-1) printf("%d", num[i]);
        else printf(",%03d", num[i]);
    }
    return 0;
}

