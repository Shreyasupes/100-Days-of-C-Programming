#include <stdio.h>
int main() {
    int n, k, i, j;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size: ");
    scanf("%d", &k);

    for(i = 0; i <= n-k; i++)
    {
        int found = 0;

        for(j = i; j < i+k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}
