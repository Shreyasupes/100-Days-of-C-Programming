# include <stdio.h>

int main()
{
    int r;

    float pi = 3.14;


    printf("Radius of Circle:");
    scanf("%d", &r);

    printf("Area of circle = %d\n", pi * r * r);

    printf("Perimeter of circle = %d\n", 2 * pi * r);


    return 0;
}
