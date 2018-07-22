#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int N, D;
double leftweight, sum;
struct mooncake{
    double inventory, value;
} cake[1005];

bool cmp (mooncake a, mooncake b) {
    if (a.value / a.inventory >= b.value / b.inventory)
        return true;
    return false;
}

int main ()
{
    cin >> N >> D;
    for (int i = 0; i < N; i++) cin >> cake[i].inventory;
    for (int i = 0; i < N; i++) cin >> cake[i].value;
    sort(cake, cake+N, cmp);
    leftweight = D;
    sum = 0;
    for (int i = 0; i < N; i++) {
        if (leftweight > cake[i].inventory) {
            leftweight -= cake[i].inventory;
            sum += cake[i].value;
        } else {
            sum += cake[i].value / cake[i].inventory * leftweight;
            break;
        }
    }
    printf("%.2lf\n", sum);
    return 0;
}

