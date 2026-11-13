#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j = 0, found = 0;

    printf("Enter any string: ");
    scanf("%99s", str);

    while(str[i] != '\0' && found == 0)
    {
        j = i + 1;

        while(str[j] != '\0')
        {
            if(str[i] == str[j])
            {
                printf("First repeating alphabet: %c", str[i]);
                found = 1;
                break;
            }

            j++;
        }

        i++;
    }

    if(found == 0)
    {
        printf("No repetition");
    }

    return 0;
}

