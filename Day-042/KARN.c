# include <stdio.h>
int main() {
    char str[100];
    int i = 0, consonant = 0, vowel = 0;

    printf("Enter any string");
    scanf("%99s", str);

    while(str[i] != '\0')
{
   if(str[i] == 'a' || str[i] == 'e' ||
   str[i] == 'i' || str[i] == 'o' ||
   str[i] == 'u' || str[i] == 'A' ||
   str[i] == 'E' || str[i] == 'I' ||
   str[i] == 'O' || str[i] == 'U')
{
    vowel++;
}
   else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'))
{
    consonant++;
}

    i++;
}
    printf("%d", vowel);
    printf("%d", consonant);

    return 0;
}

