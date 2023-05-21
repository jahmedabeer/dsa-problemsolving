#include <stdio.h>
int main()
{
    
    int num;
    scanf("%d",&num);

    for( int i = 1; i <= 12; i++ )
    {
        int result = num * i;
        printf("%d * %d = %d\n",num,i,result);
    }

    return 0;
}