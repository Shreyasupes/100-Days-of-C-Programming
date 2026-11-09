#include <stdio.h>

int main()
{
    int n, i, j,temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    i = 0;
    j = n - 1;

    while(i < j)
    {
       temp = a[i];
       a[i] = a[j];
       a[j] = temp;

       i++;
       j--;
     }

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
