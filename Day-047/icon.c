#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i = 0, j, count = 0, found = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if(strlen(str1) != strlen(str2))
    {
        found = 0;
    }
    else
    {
        while(str1[i] != '\0')
        {
            count = 0;
            j = 0;

            while(str1[j] != '\0')
            {
                if(str1[i] == str1[j])
                {
                    count++;
                }
                j++;
            }

            j = 0;
            while(str2[j] != '\0')
            {
                if(str1[i] == str2[j])
                {
                    count--;
                }
                j++;
            }

            if(count != 0)
            {
                found = 0;
                break;
            }

            i++;
        }
    }

    if(found == 1)
        printf("Strings are Anagrams");
    else
        printf("Strings are not Anagrams");

    return 0;
}
