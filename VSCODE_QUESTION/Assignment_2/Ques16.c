#include <stdio.h>
 
#define MAX 100
 
int main(void) {
    int r, c, i, j;
    long long m[MAX][MAX];
    long long rowSum[MAX] = {0}, colSum[MAX] = {0};
 
    if (scanf("%d %d", &r, &c) != 2) return 1;
    if (r > MAX) r = MAX;
    if (c > MAX) c = MAX;
 
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            scanf("%lld", &m[i][j]);
            rowSum[i] += m[i][j];
            colSum[j] += m[i][j];
        }
 
    for (i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%lld", rowSum[i]);
    }
    printf("\n");
    for (j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%lld", colSum[j]);
    }
    printf("\n");
    return 0;
}
