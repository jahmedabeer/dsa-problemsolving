#include <stdio.h>

    void printdigit( int num )
    {
        if( num == 0 ) return;
        int x = num % 10; // 4
        printdigit( num / 10);
        printf("%d ",x);
    }


int main()
{
    
    int test;
    scanf("%d",&test);

    for( int i = 0; i < test; i++ )
    {
        int n;
        scanf("%d",&n);
        printdigit(n);
        if( n==0 ) printf("0");
        printf("\n");
    }

    return 0;
}