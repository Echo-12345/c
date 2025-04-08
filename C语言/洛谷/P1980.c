#include<stdio.h>
int main()
{
    int n, x;
    int a = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j)
        {
            if (j % 10 == x)
            {
                a++;
            }
            j = j / 10;
        }
    }
    printf("%d", a);
    return 0;
}