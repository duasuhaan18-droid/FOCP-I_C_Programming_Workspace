#include <stdio.h>
 
int main(void) {
    int N, a, b, c;
    int found = 0;
 
    if (scanf("%d", &N) != 1) return 1;
 
    for (a = 1; a <= N; a++)
        for (b = a + 1; b <= N; b++)
            for (c = b + 1; c <= N; c++)
                if ((long long)a * a + (long long)b * b == (long long)c * c) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
 
    if (!found) printf("None\n");
    return 0;
}
