#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (m[j] > m[j + 1])
            {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }
    printf("%d", m[0]);
    return 0;
}