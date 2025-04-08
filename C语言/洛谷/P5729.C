#include<stdio.h>
int main()
{
    int w, x, h;
    int q;
    scanf("%d %d %d", &w, &x, &h);
    scanf("%d", &q);
    int v = w * x * h;
    int num[w][x][h];
    for (int i = 0; i < w; i++)
    {
        int w1 = i;
        for(int i = 0; i < x; i++)
        {
            int x1 = i;
            for(int i = 0; i < h; i++)
            {
                int h1 = i;
                num[w1][x1][h1] = 0;
            }
        }
    }
    int x1, y1 ,z1, x2, y2, z2;
    for (int i = 0; i < q; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
        for (int i = x1 - 1; i < x2; i++)
        {
            int w1 = i;
            for(int i = y1 - 1; i < y2; i++)
            {
                int x1 = i;
                for(int i = z1 - 1; i < z2; i++)
                {
                    int h1 = i;
                    num[w1][x1][h1] = 1;
                }
            }
        }
    }
    for (int i = 0; i < w; i++)
    {
        int w1 = i;
        for(int i = 0; i < x; i++)
        {
            int x1 = i;
            for(int i = 0; i < h; i++)
            {
                int h1 = i;
                if(num[w1][x1][h1] == 1)
                {
                    v--;
                }
            }
        }
    }
    printf("%d", v);
    return 0;
}    
    
    