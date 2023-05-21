#include <stdio.h>

    void fun( int x )
    {   
        x = 29;
        printf("fun x er address: %p\n", &x );
    }

int main()
{
    int x = 30;
    printf("main x er address: %p\n", &x );

    fun(x);
    printf("main x er value: %d", x);

    return 0;
}