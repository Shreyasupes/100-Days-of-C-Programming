# include <stdio.h>
int main()
{
    int x,y,t;
    printf("Enter any Two Number");
    scanf("%d,%d", &x,&y);

    t = x;
    x = y;
    y = t;

    printf("After Swapping Two Numbers\n");
    printf("%d\n = x", x);
    printf("%d\n = y", y);

    return 0;
}
