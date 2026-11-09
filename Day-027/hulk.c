#include <stdio.h>

int main()
{   int n,i,j,count;

    for (int i = 1; i <= 9; i++)
    {
        if(i <= 5)
            count = 2 * i - 1;
        else
            count = 2 * (9 - i) - 1;

    for(j = 1; j <= count; j++)
        {
            printf("*");
        }

     printf("\n");
    }

    return 0;
}




