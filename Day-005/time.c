# include <stdio.h>
int main() {
    int hour,sec,minute,second;
    printf("Enter value of Time in second\n");
    scanf("%d", &second);
    hour = second / 3600;
    minute = (second % 3600) / 60;
    sec = second % 60;
    printf("%d,%d,%d", hour,minute,sec);
    return 0;
}
