#include <stdio.h>

int main()
{
    int n, i;
    int even = 0, odd = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
