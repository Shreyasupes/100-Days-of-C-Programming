# include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter any number");
    scanf("%d %d %d", &a,&b,&c);

    if (a == b && b == c) {
    printf("Equilateral Triangle");
    }
    else if (a != b && b != c && c != a) {
    printf("Scalene Triangle");
    }
    else {
    printf("Isosceles Triangle");
    }

    return 0;
}
