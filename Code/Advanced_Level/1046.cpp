#include <cstdio>
#include <vector>
using namespace std;

int N, M, left, right, temp, sum;

int main () {
    scanf("%d", &N);
    vector<int> distances(N+1);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &temp);
        sum += temp;
        distances[i] = sum;
    }
    scanf("%d", &M);
    while (M--) {
        scanf("%d%d", &left, &right);
        if (right < left) swap(left, right);
        int dis = distances[right-1] - distances[left-1];
        printf("%d\n", min(dis, sum-dis));
    }
    return 0;
}

