#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double Fn;
    scanf("%d", &n);
    double d1 = 1;
    double d2 = 1;
    double d3 = sqrt(5);
    for (int i = 1; i <= n; i++)
    {
        d1 = d1 * ((1 + sqrt(5)) / 2);
        d2 = d2 * ((1 - sqrt(5)) / 2);
    }
    Fn = (d1 - d2) / d3;
    printf("%.2f", Fn);
    return 0;
}