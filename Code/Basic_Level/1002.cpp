#include <iostream>
#include <string.h>
using namespace std;

char* pinyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main()
{
    char num1[105];
    int sum = 0, num2[5], cnt = 0;
    cin >> num1;
    for (int i = 0; i < strlen(num1); i++) {
        sum += num1[i] - '0';
    }
    while (sum > 0) {
        num2[cnt++] = sum % 10;
        sum /= 10;
    }
    for (cnt--; cnt >= 0; cnt--) {
        if (cnt) cout << pinyin[num2[cnt]] << " ";
        else cout << pinyin[num2[cnt]] << endl;
    }
    return 0;
}

