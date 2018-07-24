#include <cstdio>
#include <cstring>
#include <stdlib.h>

char num[105];
int sum = 0, digits[1005], i = 0;
char* words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    scanf("%s", num);
    for (int i = 0; i < strlen(num); i++) {
        sum += num[i] - '0';
    }
    while (sum > 0) {
        digits[i++] = sum % 10;
        sum /= 10;
    }
    printf("%s", words[digits[i-1]]);
    for (int j = i-2; j >= 0; j--) {
        printf(" %s", words[digits[j]]);
    }
    printf("\n");
}

