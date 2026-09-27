# include <stdio.h>
int main (void) {
   float c, f;

   printf("Enter Celsius:");
   scanf("%f", &c);

   f = (c * 9.0f / 5.0f) + 32.0f;
   printf("Fahrenheit = %.2f\n", f);
   return 0;
}
