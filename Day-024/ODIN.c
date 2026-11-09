#include <stdio.h>

int main()
{   int n,i,j;
    printf("Enter a number: ");

    for (int i = 1; i <= 5; i++)
    {   for (int j = 1; j <= i; j++)
     {  printf("*");
     }
         printf("\n");
     }

     return 0;
}


