
#include <stdio.h>

int main()
{
    int a[100], n, num, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    if(pos < 0 || pos > n || n >= 100)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos] = num;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


