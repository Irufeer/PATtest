#include <iostream>
using namespace std;

int main ()
{
    string num1[2];
    char d[2];
    int num2[2] = {0, 0};
    cin >> num1[0] >> d[0] >> num1[1] >> d[1];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < num1[i].size(); j++) {
            if (num1[i][j] == d[i]) {
                num2[i] = num2[i]*10 + d[i]-'0';
            }
        }
    }
    cout << num2[0] + num2[1] << endl;
    return 0;
}

