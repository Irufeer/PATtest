#include <iostream>
using namespace std;

string input;
int local_e, exponent;

int main () {
    cin >> input;
    for (local_e = 0; local_e < input.length() && input[local_e] != 'E'; local_e++) ;
    for (int i = local_e+2; i < input.length(); i++)
        exponent = exponent * 10 + input[i] - '0';
    if (input[0] == '-') cout << "-";
    if (input[local_e+1] == '-') {
        cout << "0.";
        for (int i = 0; i < exponent-1; i++) cout << "0";
        cout << input[1];
        for (int i = 3; i < local_e; i++) cout << input[i];
    } else {
        cout << input[1];
        if (exponent >= local_e-3) {
            for (int i = 3; i < local_e; i++) cout << input[i];
            for (int i = 0; i < exponent-local_e+3; i++) cout << "0";
        } else {
            for (int i = 3; i < 3+exponent; i++) cout << input[i];
            cout << ".";
            for (int i = 3+exponent; i < local_e; i++) cout << input[i];
        }
    }
    return 0;
}

