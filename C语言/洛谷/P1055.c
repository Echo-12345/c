#include<stdio.h>
#include<math.h>
int main()
{
    char m[13];
    int sum = 0;
    scanf("%s", m);
    int num[] = {m[0]-'0', m[2]-'0', m[3]-'0', m[4]-'0',
         m[6]-'0', m[7]-'0', m[8]-'0', m[9]-'0', m[10]-'0'};
    for (int i = 0; i < 9; i++)
    {
        sum = sum + num[i] * (i + 1);
    }
    int n = sum % 11;
    int r = m[12]-'0';
    if (n == 10)
    {
        if(m[12] == 'X')
        {
            printf("Right");
        }
        else
        {
            printf("%d-%d%d%d-%d%d%d%d%d-X\n", num[0], num[1],
                 num[2], num[3], num[4], num[5], num[6], num[7], num[8]);
        }
    }
    else 
    {
        if(n == r)
        {
            printf("Right");
        }
        else
        {
            printf("%d-%d%d%d-%d%d%d%d%d-%d\n", num[0], num[1],
                 num[2], num[3], num[4], num[5], num[6], num[7], num[8], n);
        }
    }

    return 0;
    
    
}