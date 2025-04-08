#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = n / 52;
    int x, k;
    int s = 0;
    for (k = 1; k <= sum / 21; k++)
    {
        for (x = 1; x <= 100; x++)
        {
            if (7 * x + 21 * k == sum)
            {
                printf("%d\n", x);
                printf("%d", k);
                return 0;
            }
        }
    }
    
}