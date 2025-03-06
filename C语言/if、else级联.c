/*分段函数可使用级联的if f(x)=-1(x<0)
                           =0(x=0)
                           =2x(x>0)*/
#include<stdio.h>
int main()
{
    
    int x;

    scanf("%d", &x);

    int f = 0;
    if( x < 0 ) {
        f = -1;
    }else if( x == 0 ) {
        f = 0;
    }else {
        f = 2 * x;
    }
    printf("%d\n", f);

    return 0;
}

