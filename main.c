
#include <stdio.h>
int main() {
    int j;
    int n;
    int i;
    do {
        printf("Quante righe vuoi disegnare?_ ");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = n; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}