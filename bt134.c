#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n = 0;
    float b;
    int a[100];

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
        n++;
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i];
    }

    b = (float)sum / n;
    printf("%.3f\n", b);

    return 0;
}
