#include <stdio.h>
int main()
{
    
    /*
    int x = 100;
    int * ptr = &x;

    printf("x er address: %p\n", &x);
    printf("ptr er value: %p\n", ptr);
    printf("ptr er address: %p", &ptr);
    */

        // dereference
    int x = 100;
    int * ptr = &x;
    x = 200;

    printf( "x er value: %d\n", x );
    printf( "x er value: %d", *ptr );


    /*
    int ary[4] = {1, 2, 3, 4};

    int *p ;
    p = ary + 3; // index -> 3
    printf("%d\n",*p); // value -> 4
    *p = 5; // 3 no index value -> 5

    printf("%d\n", ary[3]);
    */
    


    return 0;
}