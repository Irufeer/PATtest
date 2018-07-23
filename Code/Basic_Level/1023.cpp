#include <iostream>
using namespace std;

int main () {
    int digits[10];
    for (int i = 0; i < 10; i++) cin >> digits[i];
    for (int i = 1; i < 10; i++) {
        if (digits[i]) {
            cout << i;
            digits[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        while (digits[i]--) {
            cout << i;
        }
    }
    return 0;
}

