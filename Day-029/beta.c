#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

     for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("sum = %d", sum);

     return 0;
}
