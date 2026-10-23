# include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter any number");
    scanf("%d %d %d", &a,&b,&c);

    if (a > b && a > c) {
    printf("%d\n = Largest", a);
    }
    else if (b > a && b > c) {
    printf("%d\n = Largest", b);
    }
    else {
    printf("%d\n = Largest", c);
    }

    return 0;
}
