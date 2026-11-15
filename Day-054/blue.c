# include <stdio.h>
int main() {
    int n, i, x;
    int leftSum, rightSum;
    int found = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        for(i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        for(i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if(leftSum == rightSum)
        {
            printf("Pivot integer = %d\n", x);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1\n");
    }

    return 0;
}

