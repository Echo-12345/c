#include<stdio.h>
int main()
{
    double s;
    scanf("%lf", &s);
    double sum = 0;
    double n = 2;
    int i;
    for (i = 0; ; i++)
    {
        if (sum >= s)
        {
            break;
        }
        else 
        {
            sum = sum + n;
            n = n * 0.98;
        }
    }
    printf("%d", i);
    return 0;
}