#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int K, n[105], answer[105], cnt = 0;

bool cmp (int a, int b) {
    return a > b;
}

bool is_coverd (int number) {
    int flag = 0, temp;
    for (int i = 0; i < K; i++) {
        temp = n[i];
        if (temp != number) {
            while (temp != 1) {
                temp = temp%2 ? (temp*3+1)/2 : temp/2;
                if (temp == number) return true;
            }
        }
    }
    return false;
}

int main ()
{
    cin >> K;
    for (int i = 0; i < K; i++)
        cin >> n[i];
    sort(n, n+K, cmp);
    for (int i = 0; i < K; i++) {
        if (is_coverd(n[i])) continue;
        else answer[cnt++] = n[i];
    }
    for (int i = 0; i < cnt; i++) {
        if (i != cnt-1) cout << answer[i] << " ";
        else cout << answer[i] << endl;
    }
    return 0;
}

