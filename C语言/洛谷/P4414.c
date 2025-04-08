#include<stdio.h>
int main()
{
    int a[3];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d\n", &a[2]);
    if (a[0] > a[1])
    {
        int t = a[1];
        a[1] = a[0];
        a[0] = t;
    }
    if (a[1] > a[2])
    {
        int t = a[2];
        a[2] = a[1];
        a[1] = t;
    }
    if (a[0] > a[1])
    {
        int t = a[1];
        a[1] = a[0];
        a[0] = t;
    }
    
    char str[3];
    for(int i = 0; i < 3; i++){
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if(str[i] == 'A')
        {
            printf("%d ", a[0]);
        }
        if(str[i] == 'B')
        {
            printf("%d ", a[1]);
        }
        if(str[i] == 'C')
        {
            printf("%d ", a[2]);
        }
    }
    return 0;
}