# include <stdio.h>
int main() {
    int n,digit,original,reverse = 0;
    printf("Enter any Number:");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
}
    if (reverse == original) {
    printf("Palindrome");
    }
    else {
    printf("Not Palindrome");
    }

    return 0;
}

