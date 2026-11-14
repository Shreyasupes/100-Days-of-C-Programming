#include <stdio.h>

int main()
{
    int a[100], n, target, i;
    int low, high, mid;
    int first = -1, last = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == target)
    {
            first = mid;
            high = mid - 1;
    }
        else if(a[mid] < target)
    {
            low = mid + 1;
    }
        else
    {
            high = mid - 1;
    }
}

    low = 0;
    high = n - 1;

    while(low <= high)
{
        mid = (low + high) / 2;

        if(a[mid] == target)
      {
            last = mid;
            low = mid + 1;
      }
        else if(a[mid] < target)
      {
            low = mid + 1;
      }
        else
      {
            high = mid - 1;
      }
}

    if(first == -1)
{
        printf("-1, -1\n");
}
    else
{
        printf("First occurrence = %d\n", a[first]);
        printf("Last occurrence = %d\n", a[last]);

        printf("First index = %d\n", first);
        printf("Last index = %d\n", last);
}

    return 0;
}

