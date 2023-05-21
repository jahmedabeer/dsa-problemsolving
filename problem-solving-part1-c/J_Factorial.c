#include <stdio.h>

    long long int factorial( long long int num )
    {
        if( num == 0 ) return 1;
        long long int result = factorial( num - 1 );
        return result * num;

    }

int main()
{
    
    int n;
    scanf("%d",&n);

    long long int result = factorial(n);
    printf("%lld",result);

    return 0;
}