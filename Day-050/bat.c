#include <stdio.h>

int main()
{
    char date[20];
    int i = 0;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%19s", date);

    if(date[3] == '0' && date[4] == '4')
    {
        while(i < 2)
        {
            printf("%c", date[i]);
            i++;
        }

        printf("-Apr-");

        i = 6;

        while(date[i] != '\0')
        {
            printf("%c", date[i]);
            i++;
        }
    }
    else
    {
        printf("Month is not April");
    }

    return 0;
}
