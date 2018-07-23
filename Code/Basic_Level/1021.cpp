#include <iostream>
using namespace std;

string number;
int digit[10];

int main () {
    cin >> number;
    for (int i = 0; i < number.length(); i++)
        digit[number[i]-'0']++;
    for (int i = 0; i < 10; i++)
        if (digit[i])
            cout << i << ":" << digit[i] << endl;
    return 0;
}

