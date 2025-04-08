#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = 1;
    int l = n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = m; i <= m + l; i++)
        {
            if (i == m + l)
            {
                printf("\n");
                continue;
            }
            if (i < 10)
            {
                printf("0%d", i);
            }
            else
            {
                printf("%d", i);
            }
        }
        m = m + l;
        l--;
    }
    return 0;
    
}