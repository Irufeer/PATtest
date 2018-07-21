#include <iostream>
using namespace std;

string days[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main ()
{
    string str[4];
    int cnt = 0;
    cin >> str[0] >> str[1] >> str[2] >> str[3];
    for (int i = 0; i < str[0].length(); i++) {
        if(str[0][i] >= 'A' && str[0][i] <= 'G' && str[0][i] == str[1][i] && cnt == 0) {
                cout << days[str[0][i]-'A'] << " ";
                cnt++;
        } else if (str[0][i] == str[1][i] && cnt == 1) {
            if (str[0][i] >= 'A' && str[0][i] <= 'N') {
                cout << str[0][i] - 'A' + 10;
                break;
            } else if (str[0][i] >= '0' && str[0][i] <= '9') {
                cout << '0' << str[0][i] - '0';
                break;
            }
        }
    }
    for (int i = 0; i < str[2].length(); i++) {
        if (str[2][i] == str[3][i] && (str[2][i] >= 'a' && str[2][i] <= 'z' || str[2][i] >= 'A' && str[2][i] <= 'Z')) {
            if (i < 10) cout << ":0" << i << endl;
            else cout << ":" << i << endl;
            break;
        }
    }
    return 0;
}

