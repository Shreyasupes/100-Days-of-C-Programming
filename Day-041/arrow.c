# include <stdio.h>
int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter any string");
    scanf("%99s", str);

    while(str[i] != '\0')
{
    count++;
    i++;
}

    printf("%d", count);

    return 0;
}
