#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int i, j, start = 0, max = 0, len;

    scanf("%999s", s);

    len = strlen(s);

    for(i = 0; i < len; i++)
    {
        for(j = start; j < i; j++)
        {
            if(s[j] == s[i])
            {
                start = j + 1;
                break;
            }
        }

        if(i - start + 1 > max)
        {
            max = i - start + 1;
        }
    }

    printf("%d", max);

    return 0;
}
