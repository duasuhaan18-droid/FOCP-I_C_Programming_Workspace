#include <stdio.h>
 
#define MAX 100
 
int main(void) {
    int n, i, j, symmetric = 1;
    long long m[MAX][MAX];
 
    if (scanf("%d", &n) != 1) return 1;
    if (n > MAX) n = MAX;
 
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lld", &m[i][j]);
 
    for (i = 0; i < n && symmetric; i++)
        for (j = i + 1; j < n; j++)
            if (m[i][j] != m[j][i]) {
                symmetric = 0;
                break;
            }
 
    printf(symmetric ? "YES\n" : "NO\n");
    return 0;
}
