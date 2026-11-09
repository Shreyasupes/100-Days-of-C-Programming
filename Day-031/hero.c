
#include <stdio.h>

int main()
{
    int n, i, key, flag = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            flag = 1;
            printf("Element found at index %d", i);
            break;
        }
    }

    if(flag == 0)
    {
        printf("Element not found");
    }

    return 0;
}
