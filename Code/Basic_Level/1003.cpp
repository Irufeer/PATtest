#include <iostream>
#include <string.h>
using namespace std;

int n;
char str[105];

int main()
{
    cin >> n;
    while(n--)
    {
        int p = 0, t = 0, flag = 1;
        cin >> str;
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] == 'P') p = i;
            else if(str[i] == 'T') t = i;
            else if(str[i] == 'A') continue;
            else flag = 0;
        }
        if(t-p <= 1) flag = 0;
        if(p*(t-p-1) != strlen(str)-t-1) flag = 0;
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

