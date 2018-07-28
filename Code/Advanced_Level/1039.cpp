#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int getid (char *name) {
    int id = 0;
    for(int i = 0; i < 3; i++)
        id = 26 * id + (name[i] - 'A');
    id = id * 10 + (name[3] - '0');
    return id;
}
const int maxn = 26 * 26 * 26 * 10 + 10;
vector<int> students[maxn];

int main () {
    int n, k, no, num, id = 0;
    char name[5];
    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %d", &no, &num);
        for(int j = 0; j < num; j++) {
            scanf("%s", name);
            id = getid(name);
            students[id].push_back(no);
        }
    }
    for(int i = 0; i < n; i++) {
        scanf("%s", name);
        id = getid(name);
        sort(students[id].begin(), students[id].end());
        printf("%s %lu", name, students[id].size());
        for(int j = 0; j < students[id].size(); j++)
            printf(" %d", students[id][j]);
        printf("\n");
    }
    return 0;
}

