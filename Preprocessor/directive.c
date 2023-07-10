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
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time %s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);

}