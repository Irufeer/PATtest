#include <iostream>
#include <math.h>
using namespace std;

void reverse(int n[], int start, int end) {
    int i = start, j = end;
    for (; i < j; i++, j--) {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
}

int main ()
{
    int N, M, num[100];
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    M = N - M % N; // 右移转换成左移(去掉越界部分)
    reverse(num, 0, M-1);
    reverse(num, M, N-1);
    reverse(num, 0, N-1);
    for (int i = 0; i < N; i++) {
        if (i != N-1) cout << num[i] << " ";
        else cout << num[i] << endl;
    }
    return 0;
}

