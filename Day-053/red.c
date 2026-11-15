#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int total = 0, leftSum = 0;
    int rightSum, pivot = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}
