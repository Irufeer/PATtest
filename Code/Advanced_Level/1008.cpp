#include <iostream>
using namespace std;

int main () {
    int N, request_floor, current_floor = 0, costs = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> request_floor;
        if (request_floor > current_floor)
            costs += (request_floor-current_floor)*6+5;
        else
            costs += (current_floor-request_floor)*4+5;
        current_floor = request_floor;
    }
    cout << costs << endl;
    return 0;
}

