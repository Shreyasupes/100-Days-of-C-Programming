# include <stdio.h>
int main() {
    int n,i,factorial = 1;
    printf("Enter any Number");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
    factorial = factorial * i;
    }

    printf("%d = factorial", factorial);

    return 0;
}
