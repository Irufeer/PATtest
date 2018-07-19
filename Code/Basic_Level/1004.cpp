#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int n, high_std_score = -1, low_std_score = 101, temp_score;
    char high_std_name[11], low_std_name[11], high_std_id[11], low_std_id[11], temp_name[11], temp_id[11];
    
    cin >> n;
    while (n--) {
        cin >> temp_name >> temp_id >> temp_score;
        if (temp_score > high_std_score) {
            strcpy(high_std_name, temp_name);
            strcpy(high_std_id, temp_id);
            high_std_score = temp_score;
        }
        if (temp_score < low_std_score) {
            strcpy(low_std_name, temp_name);
            strcpy(low_std_id, temp_id);
            low_std_score = temp_score;
        }
    }
    cout << high_std_name << " " << high_std_id << endl;
    cout << low_std_name << " " << low_std_id << endl;
    return 0;
}

