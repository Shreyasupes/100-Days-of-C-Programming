#include <stdio.h>

int main()
{
    int a[100][100], r, c, i, j;
    int flag = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c)
    {
        printf("Enter a square matrix");
        return 0;
    }


    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = i + 1; j < c; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        printf("Distinct");
    }
    else
    {
        printf("Not Distinct");
    }

    return 0;
}


