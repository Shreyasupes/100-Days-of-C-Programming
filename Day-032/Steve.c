#include <stdio.h>

int main()
{
    int n, digit;
    int freq[10] = {0};
    int max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d\n", result);
    printf("Frequency = %d", max);

    return 0;
}
