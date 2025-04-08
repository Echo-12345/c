#include<stdio.h>
#include<math.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    double sum1, sum2;
    int a = 0;
    int b = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % k == 0)
        {
            a++;
            sum1 = sum1 + i;
        }
        else
        {
            b++;
            sum2 = sum2 + i;
        }
    }
    double c = 1.0 * sum1 / a;
    double d = 1.0 * sum2 / b;
    printf("%.1f %.1f", c, d);
    return 0;
}