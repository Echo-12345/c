#include<stdio.h>
int main()
{
    double m, h;
    scanf("%lf %lf", &m, &h);
    double n = m / h / h;
    if(n < 18.5)
    {
        printf("Underweight");
    }
    else if(n >= 18.5 && n <24)
    {
        printf("Normal");
    }
    else if(n >= 24)
    {
        printf("%.4f\nOverweight", n);
    }
    return 0;
}