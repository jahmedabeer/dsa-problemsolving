#include <stdio.h>

    void fun( int * addressofx )
    {
        printf( "addressofx er value: %p\n", addressofx );
        
        printf("%d\n",*addressofx);

        // dereference
        *addressofx = 300;
        printf("%d",*addressofx);
    }



int main()
{
    
        // call by reference / address / pointer

    int x = 100;
    printf("x er address: %p\n", &x );

    fun(&x);

    return 0;
}


/*

void swap( int * p, int * q )
{
    int temp = *p; // 6
        *p = *q; // 5
        *q = temp; // 6

}

void main()
{
    int a = 6, b = 5;
    swap(&a,&b);
    printf("%d %d",a,b);
}

*/