#include <stdio.h>
#include <string.h>
int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i, flag = 1;

    scanf("%999s", s);
    scanf("%999s", t);

    if(strlen(s) != strlen(t))
    {
        flag = 0;
    }
    else
    {
        for(i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
