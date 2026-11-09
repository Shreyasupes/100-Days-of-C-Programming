#include <stdio.h>

int main()
{
    int n, digit, original, count = 0, sum = 0;
    int temp, power, i;

    printf("Enter any number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

