#include<stdio.h>
int main()
{
    int n;
    int m = 1;
    int S = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            m = m * j;
        }
        S = S + m;
        m = 1;
    }
    printf("%d", S);
    return 0;
}