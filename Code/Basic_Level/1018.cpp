#include <stdio.h>

int N, result[3], win[2][3];

int cmp (char a, char b) {
    if (a == b) return -1;
    if (a == 'B' && b == 'C' || a == 'C' && b == 'J' || a == 'J' && b == 'B') return 0;
    return 1;
}

int main ()
{
    char gesture[2], r;
    scanf("%d", &N);
    getchar();
    while (N--) {
        scanf("%c %c", &gesture[0], &gesture[1]);
        getchar();
        r = cmp(gesture[0], gesture[1]);
        if (r == -1) result[1]++;
        else {
            if (r == 0) result[0]++;
            else result[2]++;
            switch (gesture[r]) {
                case 'B': win[r][0]++; break;
                case 'C': win[r][1]++; break;
                case 'J': win[r][2]++; break;
            }
        }
    }
    printf("%d %d %d\n", result[0], result[1], result[2]);
    printf("%d %d %d\n", result[2], result[1], result[0]);
    if (win[0][0] >= win[0][1] && win[0][0] >= win[0][2]) printf("B ");
    else if (win[0][1] >= win[0][0] && win[0][1] >= win[0][2]) printf("C ");
    else printf("J ");
    if (win[1][0] >= win[1][1] && win[1][0] >= win[1][2]) printf("B\n");
    else if (win[1][1] >= win[1][0] && win[1][1] >= win[1][2]) printf("C\n");
    else printf("J\n");
    return 0;
}

