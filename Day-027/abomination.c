#include <stdio.h>

int main()
{   int i,j,count,spaces;

     for(i = 1; i <= 7; i++)
    {
        if(i <= 4)
            spaces = 4-i;
        else
            spaces = i-4;

        for(j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        if(i <= 4)
            count = 2*i-1;
        else
            count = 2*(7-i)+1;

        for(j = 1; j <= count; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



