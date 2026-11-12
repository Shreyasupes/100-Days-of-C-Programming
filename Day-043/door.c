# include <stdio.h>
int main() {
    char str[100];
    int i = 0, j, length = 0, temp;

    printf("Enter any string");
    scanf("%99s", str);

    while(str[i] != '\0')
{
    length++;
    i++;
}

   i = 0;
   j = length - 1;

   while (i < j)
{
   temp = str[i];
   str[i] = str[j];
   str[j] = temp;

   i++;
   j--;
}

  printf("Reversed string: %s", str);

  return 0;
}
