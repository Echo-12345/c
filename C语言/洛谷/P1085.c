#include<stdio.h>
int main()
{
    int n, m;
    int sum[7];
    int i, r;
    int max = 0;
    for(i = 0; ; i++)
    {
        if(i == 7)
        {
            break;
        }
        else
        { 
            scanf("%d %d", &n, &m);
            sum[i] = n + m;
        }

    }
    for(i = 0; ; i++)
    {
        if(i == 7)
        {
            break;
        }
        
        else if(max <= sum[i])
        {
            max = sum[i];
        }
    }
    for(i = 0; ; i++)
    {
        if(i == 7)
        {
            break;
        }
        else if(max > 8 && max == sum[i])
        {
            r = i + 1;
            break;
        }
        else if(max <= 8)
        {
            r = 0;
        }

    }
    printf("%d\n", r);
   
    return 0;
    

}