#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int a, b, c, d;
    if(number % 2 == 0)
    {
        if(number > 4 && number <= 12)
        {
            a = 1;
            b = 1;
            c = 0;
            d = 0; 
        }
        else 
        {
            a = 0;
            b = 1;
            c = 1;
            d = 0;
        }
    }
    if(number % 2 != 0)
    {
        if(number > 4 && number <= 12)
        {
            a = 0;
            b = 1;
            c = 1;
            d = 0;
        }
        else
        {
            a = 0;
            b = 0;
            c = 0;
            d = 1;
        }
    }
    printf("%d %d %d %d", a, b, c, d);
    return 0;
    

}