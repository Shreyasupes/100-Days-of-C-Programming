# include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, sum = 0;
    printf("Enter any Matrix");
    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
{
    for(j = 0; j < c; j++)
    {
        scanf("%d", &a[i][j]);

        sum = sum + a[i][j];
     }
}

    printf("Sum = %d\n", sum);

    for(i = 0; i < r; i++)
{
    for(j = 0; j < c; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}


    return 0;
}

