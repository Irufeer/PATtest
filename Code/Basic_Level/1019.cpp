#include <stdio.h>

int trans (int number, int type) {
    int digit[10], newnum = 0, cnt_digit = 0;
    for (int i = 0; i < 10; i++) digit[i] = 0;
    while (number > 0) {
        digit[number%10]++;
        cnt_digit++;
        number /= 10;
    }
    digit[0] += 4-cnt_digit;
    if (type == 0) {
        for (int i = 0; i <= 9; i++) {
            while (digit[i]) {
                newnum = newnum*10+i;
                digit[i]--;
            }
        }
    } else {
        for (int i = 9; i >= 0; i--) {
            while (digit[i]) {
                newnum = newnum*10+i;
                digit[i]--;
            }
        }
    }
    return newnum;
}

int main ()
{
    int N, big, small;
    scanf("%d", &N);
    if (N == 6174)
        printf("7641 - 1467 = 6174\n");
    while (N != 6174) {
        small = trans(N, 0);
        big = trans(N, 1);
        if (small == big) {
            printf("%04d - %04d = 0000\n", small, small);
            return 0;
        }
        N = big-small;
        printf("%04d - %04d = %04d\n", big, small, N);
    }
    return 0;
}

