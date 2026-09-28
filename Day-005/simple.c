# include <stdio.h>
# include <math.h>
int main() {
    float p,r,t,n,SI,A;
    printf("Enter Principle (p), Rate (r), Time (t), Compoundings per Year (n)\n");
    scanf("%f,%f,%f,%f", &p, &r, &t, &n);

    SI = (p * r * t) / 100;
    A = p * pow((1 + r / (100 * n)), (n * t));
    printf("Simple Intrest (SI) = %f\n", SI);
    printf("Compound Intrest (A) = %f\n", A);
    printf("%f\n = Principle (p)", p);
    printf("%f\n = Rate (r)", r);
    printf("%f\n = Time (t)", t);

    return 0;
}
