#include <stdio.h>
#define N 10
int main() {
    int i, j, p, q, id[N];
    p = 1;
    q = 2;
    for (i = 0; i < N; i++) id[i] = i;

    while (scanf("%d %d\n", &p, &q) == 2) {
        for (i = p; i != id[i]; i = id[i]) ;
        for (j = q; j != id[j]; j = id[j]) ;
        if (i == j) continue;
        id[i] = j;
        printf(" %d %d\n", p, q);
    }
}