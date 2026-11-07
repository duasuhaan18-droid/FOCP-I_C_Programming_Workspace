#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        int w = (i <= mid) ? i : n - i + 1;  
        for (int j = 1; j <= w; j++) printf("*");
        for (int j = 1; j <= 2 * (mid - w) + 1; j++) printf(" ");
        for (int j = 1; j <= w; j++) printf("*");
        printf("\n");
    }
    return 0;
}