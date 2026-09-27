# include <stdio.h>
int main()
{
    int x,y;
    printf("Enter any Two Numbers\n");
    scanf("%d,%d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping Two Numbers");
    printf("%d\n = x", x);
    printf("%d\n = y", y);

    return 0;
}
