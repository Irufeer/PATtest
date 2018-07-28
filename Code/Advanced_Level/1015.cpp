#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    for (int i = 2; i < sqrt(number)+1; i++)
        if (number % i == 0) return false;
    return true;
}

int reverse (int number, int radix) {
    int reversed = 0, temp[20], cnt = 0;
    while (number > 0) {
        temp[cnt++] = number % radix;
        number /= radix;
    }
    for (int i = 0; i < cnt; i++)
        reversed = reversed*radix+temp[i];
    return reversed;
}

int main () {
    int N, D;
    while (cin >> N && N >= 0) {
        cin >> D;
        if (isPrime(N) && isPrime(reverse(N, D)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}


