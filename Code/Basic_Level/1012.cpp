#include <iostream>
#include <iomanip>
using namespace std;

int N, A[6];
int A2_cnt, A4_cnt, temp;

int main ()
{
    cin >> N;
    while (N--) {
        cin >> temp;
        switch (temp % 5) {
            case 0: if (temp % 2 == 0) A[1] += temp; break;
            case 1: if (++A2_cnt % 2) A[2] += temp;
                    else A[2] -= temp;
                    break;
            case 2: A[3]++; break;
            case 3: A[4] += temp; A4_cnt++; break;
            case 4: if (temp > A[5]) A[5] = temp; break;
        }
    }
    if (A[1]) cout << A[1] << " ";
    else cout << "N ";
    if (A2_cnt) cout << A[2] << " ";
    else cout << "N ";
    if (A[3]) cout << A[3] << " ";
    else cout << "N ";
    if (A[4]) cout << fixed << setprecision(1) << (double)A[4]/A4_cnt  << " ";
    else cout << "N ";
    if (A[5]) cout << A[5] << endl;
    else cout << "N" << endl;
    return 0;
}

