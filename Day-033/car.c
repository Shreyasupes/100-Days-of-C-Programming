
#include <stdio.h>

int main()
{
    int a[100], n, key;
    int low, high, mid;
    int i, found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements in sorted order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}

