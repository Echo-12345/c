#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n * n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n * j + 1)
            printf("\n");
        }
        printf("%02d", i);
    }
    printf("\n");
    printf("\n");
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        int m = i;
        for (int j = 1; j <= 2 * (n - m); j++)
        {
            printf(" ");
        }
        for (int j = 1; j<= m; j++)
        {
            printf("%02d", s);
            s++;
        }
        printf("\n");
    }
    return 0;
}
