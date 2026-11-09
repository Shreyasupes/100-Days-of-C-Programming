#include <stdio.h>

int main()
{
    int n, numerator, denominator;
    double sum = 0, term;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
            numerator = 2 * i;
            denominator = 4 * i - 1;
            term = (double)numerator / denominator;

        sum = sum + term;
    }

    printf("Sum = %lf", sum);

    return 0;
}
