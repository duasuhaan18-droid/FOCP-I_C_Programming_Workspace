#include <stdio.h>
 
long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
 
int main(void) {
    long long n, m, x;
    long long count = 0;
 
    if (scanf("%lld %lld", &n, &m) != 2) return 1;
 
    for (x = 1; x <= m; x++)
        if (gcd(x, n) == 1)
            count++;
 
    printf("%lld\n", count);
    return 0;
}
