#include <stdio.h>
 
#define MAXN 100000
 
int main(void) {
    int n, i;
    long long a[MAXN];
    int run = 1, best = 1;
 
    if (scanf("%d", &n) != 1) return 1;
    if (n <= 0) {
        printf("0\n");
        return 0;
    }
    if (n > MAXN) n = MAXN;
    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);
 
    for (i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) run++;
        else run = 1;
        if (run > best) best = run;
    }
 
    printf("%d\n", best);
    return 0;
}
