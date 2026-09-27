# include <stdio.h>
int main() {
    int n;
    int Sum;

    printf("Enter Any Numbers\n");
    scanf("%d", &n);

    printf("Sum of n Natural Numbers\n");

    Sum = n * (n + 1)/2;

    printf("%d\n", Sum);

    return 0;
}
