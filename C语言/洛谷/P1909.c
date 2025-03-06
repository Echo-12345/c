#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b;
    int i;
    int m[3];
    int s;
    int max;
    for(i = 0; ; i++)
    {
        if(i == 3)
        {
            break;
        }
        else 
        {
            scanf("%d %d", &a, &b);
            s = ceil(1.0 * n / a);
            m[i] = s * b;
        }
    }
    if(m[0] <= m[2] && m[0] <= m[1])
    {
        printf("%d", m[0]);
    }
    if(m[1] <= m[2] && m[1] <= m[0])
    {
        printf("%d", m[1]);
    }
    if(m[2] <= m[0] && m[2] <= m[1])
    {
        printf("%d", m[2]);
    }
    return 0;

}