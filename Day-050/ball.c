#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, k;

    printf("Enter a string: ");
    scanf("%99s", str);

    while(str[i] != '\0')
    {
        j = i;

        while(str[j] != '\0')
        {
            k = i;

            while(k <= j)
            {
                printf("%c", str[k]);
                k++;
            }

            printf("\n");
            j++;
        }

        i++;
    }

    return 0;
}
