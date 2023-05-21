#include <stdio.h>

    void fun( int * ar , int n )
    {
        ar[3] = 500;
    }


int main()
{
    int ar[5] = {40,44,34,54,22};

    fun(ar,5);
    
    for( int i = 0; i < 5; i++ )
    {
        printf("%d ",ar[i]);
    }

    return 0;
}