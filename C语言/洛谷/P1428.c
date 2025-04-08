#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int s = i;
        int m = 0;
        if (s == 0)
        {
            printf("0 ");
        }
        else
        {
            for (int j = 1; j <= s; j++)
            {
                if (num[s] > num[s - j])
                {
                    m++;
                }
            }
            printf("%d ", m);
        }
    }
    return 0;
}