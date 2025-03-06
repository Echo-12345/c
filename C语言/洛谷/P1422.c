#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    double n;
    if (m <= 150)
    {
        n = m * 0.4463;
    }
    else if (m > 150 && m <= 400)
    {
        n = 150 * 0.4463 + (m - 150) * 0.4663;
    }
    else if (m > 401)
    {
        n = 150 * 0.4463 + 250 * 0.4663 + (m - 400) * 0.5663;
    }
    printf("%.1f", n);
    return 0;
}