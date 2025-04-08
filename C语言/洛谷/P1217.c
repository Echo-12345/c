#include<stdio.h>
#include<math.h>
int HWS(int num) 
{
    int temp = num;
    int a = 0;
    while (temp != 0) 
    {
        a = a * 10 + temp % 10;
        temp /= 10;
    }
    if (a == num)
    {
        return 1;
    }
    return 0;
}
int isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int l(int n)
{
    if (n >= 100000 && n < 1000000)
    {
        return 0;
    }
    if (n >= 10000000 && n < 100000000)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    for (i = a; i <= b; i++)
    {
        if (l(i))
        {
            if (HWS(i) && isprime(i))
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}