#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

typedef struct {
    int id, score_de, score_cai, type; //才德>=H:3,德>=H:2,德>才:1,才德>=L:0”
} student;

bool cmp (student a, student b) {
    if (a.type != b.type) return a.type > b.type;
    if (a.score_de + a.score_cai == b.score_de + b.score_cai) {
        if (a.score_de != b.score_de) return a.score_de > b.score_de;
        else return a.id < b.id;
    }
    return a.score_de + a.score_cai > b.score_de + b.score_cai;
}

int main ()
{
    int N, L, H, cnt = 0;
    scanf("%d%d%d", &N, &L, &H);
    student* students = (student*)malloc(sizeof(student) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d%d%d", &students[i].id, &students[i].score_de, &students[i].score_cai);
        if (students[i].score_de >= H && students[i].score_cai >= H) students[i].type = 4;
        else if (students[i].score_de >= H && students[i].score_cai >= L) students[i].type = 3;
        else if (students[i].score_de >= students[i].score_cai && students[i].score_cai >= L) students[i].type = 2;
        else if (students[i].score_de >= L && students[i].score_cai >= L) students[i].type = 1;
        else students[i].type = 0;
        if (students[i].type) cnt++;
    }
    sort(students, students+N, cmp);
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
        printf("%d %d %d\n", students[i].id, students[i].score_de, students[i].score_cai);
    return 0;
}

