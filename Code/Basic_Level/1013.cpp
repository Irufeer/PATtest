#include <iostream>
#include <math.h>
using namespace std;

bool is_prime (int number) {
    if (number <= 1) return false;
    else if (number == 2) return true;
    else {
        for (int i = 2; i < sqrt(number)+1; i++)
            if (number % i == 0) return false;
    }
    return true;
}

int main ()
{
    int M, N, temp = 2, cnt_prime = 0;
    cin >> M >> N;
    while (true) {
        if (is_prime(temp) && ++cnt_prime >= M && cnt_prime <= N) {
            if ((cnt_prime-M) % 10 == 0) cout << temp;
            else if ((cnt_prime-M) % 10 < 9) cout << " " << temp;
            else cout << " " << temp << endl;
        } else if (cnt_prime > N) break;
        temp++;
    }
    return 0;
}

