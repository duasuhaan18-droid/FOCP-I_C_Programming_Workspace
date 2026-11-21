#include <stdio.h>
 
#define MAXN 10000
 
int digitSum(long long x) {
    int s = 0;
    if (x < 0) x = -x;
    while (x > 0) {
        s += (int)(x % 10);
        x /= 10;
    }
    return s;
}
 
int main(void) {
    int n, i, j;
    long long a[MAXN];
    int ds[MAXN];
    long long count = 0;
 
    if (scanf("%d", &n) != 1) return 1;
    if (n > MAXN) n = MAXN;
    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        ds[i] = digitSum(a[i]);
    }
 
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (ds[i] == ds[j])
                count++;
 
    printf("%lld\n", count);
    return 0;
}
