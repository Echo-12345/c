#include<stdio.h>
int main()
{
    int k, n;
    scanf("%d", &k);
    double Sn = 0;
    for (int i = 1; ; i++)
    {
        if (Sn > k)
        {
            n = i - 1;
            break;
        }
        else
        {
            Sn = Sn + 1.0 / i;
        }
    }
    printf("%d", n);
    return 0;
}