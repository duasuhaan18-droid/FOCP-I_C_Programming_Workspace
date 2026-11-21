#include <stdio.h>
 
#define MAX 100
 
int main(void) {
    int r, c, i, j, k;
    long long m[MAX][MAX];
 
    if (scanf("%d %d", &r, &c) != 2) return 1;
    if (r > MAX) r = MAX;
    if (c > MAX) c = MAX;
 
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%lld", &m[i][j]);
 
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            int isRowMin = 1, isColMax = 1;
 
            for (k = 0; k < c; k++)
                if (m[i][k] < m[i][j]) { isRowMin = 0; break; }
 
            for (k = 0; k < r; k++)
                if (m[k][j] > m[i][j]) { isColMax = 0; break; }
 
            if (isRowMin && isColMax) {
                printf("%d %d %lld\n", i, j, m[i][j]);
                return 0;
            }
        }
    }
 
    printf("None\n");
    return 0;
}
