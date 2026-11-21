#include <stdio.h>
 
int main(void) {
    char s[100005];
    int i, run;
 
    if (scanf("%100000s", s) != 1) return 0;
 
    i = 0;
    while (s[i] != '\0') {
        run = 1;
        while (s[i + run] != '\0' && s[i + run] == s[i])
            run++;
        printf("%c%d", s[i], run);
        i += run;
    }
    printf("\n");
    return 0;
}
