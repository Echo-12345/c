#include<stdio.h>
int main()
{
    int type;
    scanf("%d", &type);
    switch(type)
    {
    case 1:
        printf("a");
        break;
    case 2:
        printf("b");
        break;
    case 3:
        printf("c");
        break;
    default:
        printf("6");
        break;
    }
    return 0;
}