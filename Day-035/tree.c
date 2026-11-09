
#include <stdio.h>

int main()
{
    int a[100], n, i, max, second, found = 0;

    scanf("%d", &n);

    if(n < 2 || n > 100)
        return 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
            found = 1;
        }
        else if(a[i] < max)
        {
            if(found == 0 || a[i] > second)
            {
                second = a[i];
                found = 1;
            }
        }
    }

    if(found)
        printf("%d", second);
    else
        printf("-1");

    return 0;
}


