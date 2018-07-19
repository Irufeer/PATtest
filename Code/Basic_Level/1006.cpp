#include <iostream>
using namespace std;

int main ()
{
    int num;
    cin >> num;
    if (num / 100) {
        for (int i = 0; i < num / 100; i++)
            cout << "B";
        num %= 100;
    }
    if (num / 10) {
        for (int i = 0; i < num / 10; i++)
            cout << "S";
        num %= 10;
    }
    if (num) {
        for (int i = 1; i <= num; i++)
            cout << i;
    }
    cout << endl;
    return 0;
}

