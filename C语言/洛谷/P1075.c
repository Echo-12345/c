#include<stdio.h>
#include<math.h>
int isprime(int m)
{
    for (int j = 2; j <= sqrt(m); j++)
    {
        if (m % j == 0)
        {
            return 0;
        }
    }
    return 1;
}            
int main()
{
    int n, m;
    scanf("%d", &n);
    if (n <= 3)
    {
        printf("%d", n);
    }
    if (n % 2 == 0)
    {
        m = n / 2;
        if (isprime(m))
        {
            printf("%d", m);
        }
    }
    for(int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            m = n / i;
            if (isprime(i))
            {
                if (isprime(m))
                {
                    printf("%d", m);
                }
            }
        }
    }
    
}