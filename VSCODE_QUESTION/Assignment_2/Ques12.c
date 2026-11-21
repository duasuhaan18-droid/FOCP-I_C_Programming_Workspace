#include <stdio.h>
 
#define MAXN 10000
 
int main(void) {
    int n, i, j;
    long long a[MAXN];
    long long best = -1, diff;
 
    if (scanf("%d", &n) != 1) return 1;
    if (n > MAXN) n = MAXN;
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);
 
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++) {
            diff = a[i] - a[j];
            if (diff < 0) diff = -diff;
            if (best == -1 || diff < best)
                best = diff;
        }
 
    printf("%lld\n", best);   /* -1 if fewer than two values */
    return 0;
}
