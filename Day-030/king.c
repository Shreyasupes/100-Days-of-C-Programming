#include <stdio.h>

int main()
{
    int n, i;
    int positive = 0, negative = 0, zero = 0;

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
        if(a[i] > 0)
        {
            positive++;
        }
        else if(a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}
