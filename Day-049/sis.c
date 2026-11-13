#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Find the last space
    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] == ' ')
        {
            lastSpace = i;
        }

        i++;
    }

    // Print initials
    i = 0;

    while(i < lastSpace)
    {
        if(i == 0 && str[i] != ' ')
        {
            printf("%c. ", str[i]);
        }
        else if(str[i] == ' ' && str[i + 1] != ' ')
        {
            if(i + 1 < lastSpace)
            {
                printf("%c. ", str[i + 1]);
            }
        }

        i++;
    }

    // Print surname in full
    i = lastSpace + 1;

    while(str[i] != '\0' && str[i] != '\n')
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
