#include <stdio.h>

int main()
{
    int n, temp, first, last;
    int count = 0, place = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the last digit
    last = n % 10;

    // Find the first digit and count digits
    while (temp >= 10)
    {
        temp = temp / 10;
        count++;
    }

    first = temp;

    // Calculate place value
    for (int i = 0; i < count; i++)
    {
        place = place * 10;
    }

    // Extract middle digits
    middle = (n % place) / 10;

    // Swap first and last digits
    result = last * place + middle * 10 + first;

    printf("Number after swapping = %d\n", result);

    return 0;
}
