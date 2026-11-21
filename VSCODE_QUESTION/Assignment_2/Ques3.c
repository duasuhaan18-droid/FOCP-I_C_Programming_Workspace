#include <stdio.h>
 
long long rectArea(long long length, long long width) {
    return length * width;
}
 
int main(void) {
    long long length, width;
    if (scanf("%lld %lld", &length, &width) != 2) return 1;
    printf("%lld\n", rectArea(length, width));
    return 0;
}
