#include <stdio.h>

    int fun( int ar[], int n )
    {
        for( int i = 0; i < n; i++ )
        {
            printf("%d ", ar[i] );
        }
    }


int main()
{
    int ar[5] = {45,55,532,23,14};
    fun(ar,5);

    return 0;
}