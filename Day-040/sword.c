#include <stdio.h>

int main()
{
    int a[100][100], r, c, i, j, d;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    for(d = 0; d < r + c - 1; d++)
    {
        if(d % 2 == 0)
        {
            i = (d < r) ? d : r - 1;
            j = d - i;

            while(i >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            j = (d < c) ? d : c - 1;
            i = d - j;

            while(j >= 0 && i < r)
            {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
