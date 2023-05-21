#include <stdio.h>
#include <string.h>

    void fun( char ar[] )
    {
        printf( "%d\n",strlen(ar) );
    }

    void funp( char * ar )
    {
        printf( "%d",strlen(ar) );
    }

int main()
{
    
    char ar[45] = "hello";

    fun( ar );

    funp( ar );

    return 0;
}