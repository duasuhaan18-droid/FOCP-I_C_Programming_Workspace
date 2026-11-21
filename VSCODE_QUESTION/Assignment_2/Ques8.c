#include <stdio.h>
 
#define MAXN 10000
 
int main(void) {
    int n, i, j;
    long long target, a[MAXN];
    long long count = 0;
 
    if (scanf("%d %lld", &n, &target) != 2) return 1;
    if (n > MAXN) n = MAXN;
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);
 
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] + a[j] == target)
                count++;
 
    printf("%lld\n", count);
    return 0;
}
