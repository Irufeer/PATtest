#include <iostream>
using namespace std;

long long A, B, sum;
int D, cnt = 0, digits[100];

int main () {
    cin >> A >> B >> D;
    sum = A + B;
    while (sum) {
        digits[cnt++] = sum % D;
        sum /= D;
    }
    if (cnt == 0) cout << "0";
    for (int i = cnt-1; i >= 0; i--)
        cout << digits[i];
    return 0;
}

