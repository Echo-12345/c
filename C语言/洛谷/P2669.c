#include<stdio.h>
int main()
{
    int k, j;
    int d = 0;
    scanf("%d", &k);
    int sum = 0;
    for (int i = 1; ; i++)
    {
        d = d + i;
        if (d > k)
        {
            j = i;
            d = d - i;
            break;
        }
        sum = sum + i * i;
    }
    sum = sum + (k - d) * j;
    printf("%d", sum);
    return 0;
}