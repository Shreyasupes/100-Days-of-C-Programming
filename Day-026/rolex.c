#include <stdio.h>

int main()
{
    int i, count;

    for(i = 1; i <= 5; i++)
    {
        if(i <= 3)
            count = 2 * i - 1;
        else
            count = 2 * (5 - i) + 1;

        while(count > 0)
        {
            printf("*\n");
            count--;
        }

        printf("\n");
    }

    return 0;
}

