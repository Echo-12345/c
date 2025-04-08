#include<stdio.h>
int main()
{
    int l, m;
    scanf("%d %d", &l, &m);
    m = 2 * m;
    int num[m];
    int s = l + 1;
    int a[l + 1];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < m; i = i + 2)
    {
        int t = i;
        for (int j = num[t]; j <= num[t + 1]; j++)
        {
            a[j] = 1;
        }
    }
    for (int i = 0; i < l + 1; i++)
    {
        if (a[i] == 1)
        {
            s--;
        }
    }
    printf("%d", s);
    return 0;
}





















