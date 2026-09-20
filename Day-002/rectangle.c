# include <stdio.h>

int main()
{
    int a,b;

    printf("Enter Length and Breadth of Rectangle:");
    scanf("%d %d", &a, &b);

    printf("Area of Rectangle = %d\n", a * b);

    printf("Perimeter of Rectangle =%d\n", 2 * (a + b));

    return 0;
}
