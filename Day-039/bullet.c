#include <stdio.h>
int main()
{
    int a[100][100], r, c, i, j;
    int sum = 0;

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
    sum = sum + a[i][i];
}

    printf("%d", sum);

    return 0;
}

