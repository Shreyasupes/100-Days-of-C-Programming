#include <stdio.h>

int main()
{
    char str[200], temp;
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            start = i;

            while(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
            {
                i++;
            }

            end = i - 1;

            while(start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }
        }
        else
        {
            i++;
        }
    }

    printf("Updated sentence: %s", str);

    return 0;
}

