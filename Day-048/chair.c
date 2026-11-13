
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int i = 0, found = 0;

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
        strcpy(temp, str1);
        strcat(temp, str1);

        if(strstr(temp, str2) != NULL)
        {
            found = 1;
        }
    }

    if(found == 1)
        printf("Strings are rotations");
    else
        printf("Strings are not rotations");

    return 0;
}
