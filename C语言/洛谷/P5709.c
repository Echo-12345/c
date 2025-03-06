#include<stdio.h>
#include<math.h>
int main()
{
    int m, t, s;
    int left;
    scanf("%d %d %d", &m, &t, &s);
    int num;
    if(t == 0)
    {
        printf("0");
    }
    
    else if(1.0 * s / t < m)
    {
        num = ceil(1.0 * s / t);
        left = m - num;
        printf("%d", left);
    }
    else if(1.0 * s / t >= m)
    {
        printf("0");
    }
    
    return 0;
}