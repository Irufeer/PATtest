#include <cstdio>
#include <string.h>
#include <stdlib.h>

int M;
int inH, inM, inS, outH, outM, outS;
int minTime = 24*60*60, maxTime = 0;
char ID[105], inID[105], outID[105], minTimeID[105], maxTimeID[105];
int main()
{
    scanf("%d", &M);
    while (M--) {
        scanf("%s %d:%d:%d %d:%d:%d", &ID, &inH, &inM, &inS, &outH, &outM, &outS);
        int inTime = inH*60*60+inM*60+inS;
        int outTime = outH*60*60+outM*60+outS;
        if (inTime < minTime) {
            minTime = inTime;
            strcpy(inID, ID);
        }
        if (outTime > maxTime) {
            maxTime = outTime;
            strcpy(outID, ID);
        }
    }
    printf("%s %s\n", inID, outID);
}

