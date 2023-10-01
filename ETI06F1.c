#include <stdio.h>
#include <math.h>

//Problem link: https://pl.spoj.com/problems/ETI06F1/

#define PI 3.141592654

void calculateArea(double a, double b)
{
    double radius = pow(a, 2.0) - pow((b / 2), 2.0);

    double area = PI * radius;

    printf("%.2lf \n", area);
}

//------------------------------------------------

int main()
{
    double r, d;
    scanf("%lf%lf", &r, &d);

    calculateArea(r, d);
    return 0;
}