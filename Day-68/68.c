#include <stdio.h>
int main() {
    int a[100], n, i, sum = 0;
    int expected, missing;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    expected = n * (n + 1) / 2;

    missing = expected - sum;

    printf("%d", missing);

    return 0;
}
