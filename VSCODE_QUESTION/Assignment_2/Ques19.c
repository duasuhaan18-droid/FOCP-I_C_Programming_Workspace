#include <stdio.h>
 
#define MAX 100
 
int main(void) {
    int r, c, i, j, peaks = 0;
    long long m[MAX][MAX];
 
    if (scanf("%d %d", &r, &c) != 2) return 1;
    if (r > MAX) r = MAX;
    if (c > MAX) c = MAX;
 
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%lld", &m[i][j]);
 
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            int peak = 1;
            if (i > 0     && m[i - 1][j] >= m[i][j]) peak = 0;
            if (i < r - 1 && m[i + 1][j] >= m[i][j]) peak = 0;
            if (j > 0     && m[i][j - 1] >= m[i][j]) peak = 0;
            if (j < c - 1 && m[i][j + 1] >= m[i][j]) peak = 0;
            if (peak) peaks++;
        }
 
    printf("%d\n", peaks);
    return 0;
}
