#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = 10000;
    int c;
    int num[m];
    for (int i = 0; ; i++)
    {
        if (i == 0)
        {
            num[i] = n;
        }
        else
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                num[i] = n;
            }
            else
            {
                n = n * 3 + 1;
                num[i] = n;
            }
        }
        if (num[i] == 1)
        {
            c = i;
            break;
        }
    }
    for (int i = c; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    return 0;
}