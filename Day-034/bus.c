
#include <stdio.h>

int main()
{
    int a[100], n, num, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            for(j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }

            n--;
            break;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}








