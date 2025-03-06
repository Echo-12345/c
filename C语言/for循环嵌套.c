#include<stdio.h>
int main()
{
    int x, y, z;
    int money = 2;
    for( x = 1;x < money*10;x++ )
    {
        for( y = 1;y < money*10/2;y++ )
        {
            for( z = 1;z < money*10/5;z++ )
            {
                if( x + 2*y + 5*z == money*10 )
                {
                    printf("%d %d %d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}