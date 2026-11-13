#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, j = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            j++;
        }
        else
        {
            if(j > max)
            {
                max = j;
                start = i - j;
            }

            j = 0;
        }

        i++;
    }

    if(j > max)
    {
        max = j;
        start = i - j;
    }

    printf("Longest word: ");

    i = start;
    while(i < start + max)
    {
        printf("%c", str[i]);
        i++;
    }

    printf("\nLength: %d", max);

    return 0;
}
