#include <iostream>
using namespace std;

int main ()
{
    string A;
    int B, temp;
    cin >> A >> B;
    temp = A[0]-'0';
    for (int i = 1; i < A.size(); i++) {
        temp = temp*10+A[i]-'0';
        cout << temp / B;
        temp %= B;
    }
    if (A.size() == 1 && A[0]-'0' < B) cout << "0";
    cout << " " << temp << endl;
    return 0;
}

