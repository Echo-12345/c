#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min, max;
    int i;
    if (a < b && a < c)
    {
        min = a;
    }
    if (b < a && b < c)
    {
        min = b;
    }
    if (c < b && c < a)
    {
        min = c;
    }
    if (a > b && a > c)
    {
        max = a;
    }
    if (b > a && b > c)
    {
        max = b;
    }
    if (c > b && c > a)
    {
        max = c;
    }
    for(int i = 1; i <= min + 1; i++)
    {
        if(min % i == 0 && max % i == 0)
        {
            min /= i; max /= i;
            i = 1;
        }
    }
    printf("%d/%d", min, max);
    return 0;

    
        
    
}