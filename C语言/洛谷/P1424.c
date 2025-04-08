#include<stdio.h>
int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    int a = 6 - x;
    int b;
    int i;
    if (x == 6)
    {
        if (n <= 2)
        {
            b = 0;
        }
        if (n > 2)
        {
            for (i = 0; ; i++)
            {
                if (n - i * 7 < 0)
                {
                    break;
                }
                else if (n - i * 7 < 7 && n - i * 7 > 2)
                {
                    b = 250 * (n - i * 7 - 2) + 250 * i * 5;
                }
                else if (n - i * 7 == 0 || n - i * 7 == 1 || n - i * 7 == 2)
                {
                    b = 250 * 5 * i;
                }
                
            }
        }
    }
    if (x == 7)
    {
        if (n <= 1)
        {
            b = 0;
        }
        if (n > 1)
        {
            for (i = 0; ; i++)
            {
                if (n - i * 7 < 0)
                {
                    break;
                }
                else if (n - i * 7 < 7 && n - i * 7 > 1)
                {
                    b = 250 * (n - i * 7 - 1) + 250 * i * 5;
                }
                else if (n - i * 7 == 0 || n - i * 7 == 1)
                {
                    b = 250 * 5 * i;
                }
                
            }
        }
    }
    if (x < 6)
    {
        if (n - a <= 0)
        {
            b = 250 * n;
        }
        else if(n - a > 0 && n - a <= 2)
        {
            b = 250 * a;
        }
        if (n - (8 - x) > 0)
        {
            for (i = 0; ; i++)
            {
                if (n - (8 - x) - i * 7 < 0)
                {
                    break;
                }
                else if (n - (8 - x) - i * 7 < 6 && n - (8 - x) - i * 7 > 0)
                {
                    b = 250 * (n - i * 7 - 2) + 250 * i * 5;
                }
                else if (n - (8 - x) - i * 7 == 6)
                {
                    b = 250 * (n - i * 7 - 3) + 250 * i * 5;
                }
                else if (n - (8 - x) - i * 7 == 0)
                {
                    b = 250 * (6 - x) + 250 * i * 5;
                }

            }
        }
    }
    
    printf("%d", b);
    return 0;
        
}