#include <stdio.h>
#define PI 22/7.0
#define SQR(X) X * X
#define DEMO(X) (X + X)

int main(void)
{
    double areaofcircle = PI * 10 * 10;
    int n = SQR(10);
    printf("Area= %lf\n", areaofcircle);
    printf("%d\n", n);
    int j = DEMO(3) * DEMO(2);
    printf("%d\n", j);
}