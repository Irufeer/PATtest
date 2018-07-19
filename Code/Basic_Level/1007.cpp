#include <iostream>
#include <math.h>
using namespace std;

bool is_prime (int num) {
    if (num <= 1) return false;
    else if (num == 2) return true;
    else {
        for (int i = 2; i < sqrt(num)+1; i++) {
            if (num % i == 0) return false;
        }
    }
    return true;
}

int main ()
{
    int N, former_prime_num = 2, cnt = 0;
    cin >> N;
    for (int i = 3; i <= N; i++) {
        if (is_prime(i)) {
            if (i - former_prime_num == 2) cnt++;
            former_prime_num = i;
        }
    }
    cout << cnt << endl;
    return 0;
}

