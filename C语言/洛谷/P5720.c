#include<stdio.h>
#include<math.h>
int main()
{
    int a, m;
    scanf("%d", &a);
    int i;
    int n = 2; 
    for (i = 1; ; i++)
    {
        if(a == 1)
        {
            n = 1;
            break;
        }
        else
        {
            
            m = a / 2;
            if (m == 1)
            {
                break;
            }
            else
            {
                a = m;
                n++;
            }
            
        }
    }
    printf("%d", n);
    return 0;
}