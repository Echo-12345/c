#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    if(n % 100 != 0)
    {
        if(n % 4 == 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }
    }
    if(n % 100 == 0)
    {
        if(n % 400 == 0)
        {
            a = 1;
        }
        else
        {
            a = 0;

        }
    }
    printf("%d", a);
    return 0;
}