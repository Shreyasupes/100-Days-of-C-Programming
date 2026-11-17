#include <stdio.h>
int main() {
    int a[100], n, i;
    int sum = 0, expected, repeated;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    expected = (n - 1) * n / 2;

    repeated = sum - expected;

    printf("%d", repeated);

    return 0;
}
