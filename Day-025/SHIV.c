#include <stdio.h>

int main()
{   int n,i,j;
    printf("Enter a number: ");

    for (int i = 1; i <= 5; i++)
    {    for (int j = 6 - i; j <= 5; j++)
     {    printf("%d", j);
     }

     printf("\n");
     }

     return 0;
}
