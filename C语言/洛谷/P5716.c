#include<stdio.h>
#include<math.h>
int main()
{
    int y, m;
    scanf("%d %d", &y, &m);
    int a;
    if(y % 100 != 0)
    {
        if(y % 4 == 0)
        {
            if(m == 2)
            {
                a = 29;
            }
            else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                a = 31;
            }
            else if(m == 4 || m == 6 || m == 9 || m == 11)
            {
                a = 30;
            }
        }
        else
        {
            if(m == 2)
            {
                a = 28;
            }
            else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                a = 31;
            }
            else if(m == 4 || m == 6 || m == 9 || m == 11)
            {
                a = 30;
            }
        }
    }
    if(y % 100 == 0)
    {
        if(y % 400 == 0)
        {
            if(m == 2)
            {
                a = 29;
            }
            else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                a = 31;
            }
            else if(m == 4 || m == 6 || m == 9 || m == 11)
            {
                a = 30;
            }
        }
        else
        {
            if(m == 2)
            {
                a = 28;
            }
            else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                a = 31;
            }
            else if(m == 4 || m == 6 || m == 9 || m == 11)
            {
                a = 30;
            }
        }
    }
    printf("%d", a);
    return 0;
}