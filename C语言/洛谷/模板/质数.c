#include<stdio.h>
void zhishu(int a, int b)
{
    int c = 1;
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c = 0;
            }
        }
        if (c == 1)
        {
            printf("%d", i);
        }
    }
    return 0;
}