#include <stdio.h>
int main()
{
    
    /*
    Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

    absolute value : means to remove any negative sign in front of a number . EX : |-5| = 5 , |7| = 7
    */

    int num;
    scanf("%d",&num);

    int ar[num];
    for( int i = 0; i < num; i++ )
    {
        scanf("%d",&ar[i]);
    }

    long long int sum = 0;
    for( int i = 0; i < num; i++ )
    {
        sum += ar[i];
    }

    if( sum > 0 )
    {
        printf("%lld",sum);
    }else{
        printf("%lld",sum * -1);
    }


    return 0;
}