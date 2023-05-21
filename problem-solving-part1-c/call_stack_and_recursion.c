#include <stdio.h>


    // call stack
    /*

        -> main ()
        -> hello ()
        -> main ()


        result:
            -> main -> hello -> print: Hello -> world
            -> world -> print: world
            -> main -> print: end

    */

/*
    void world()
    {
        printf("world\n");
    }

    void hello()
    {
        printf("Hello\n");
        world();
    }


int main()
{

    hello();
    printf("end");

    return 0;
}

*/


    // Example 1 --

    /* call stack

        main() -> baseCase
        print: 1 -> basecase(2)
        print: 2 -> baseCase(3)
        print: 3 -> baseCase(4)
        print: 4 -> baseCase(5)
        print: 5 -> if 6 return;

    */

   /*
    void baseCase( int i )
    {
        if( i == 6 ) return; // base case
        printf("%d ",i);
        baseCase( i+1 );
    }

    int main()
    {

        baseCase(1);

        return 0;
    }
    */


   /* // Array Printing using Recursion

   void printArr( int * ar, int n, int i )
   {
        if(i==n) return; // base case
        printf("%d ",ar[i]);
        printArr( ar, n, i+1 );
   }

   int main()
   {

        int n;
        scanf("%d",&n);
        int ar[n];
        for( int i = 0; i < n; i++ )
        {
            scanf("%d",&ar[i]);
        }

        printArr( ar, n , 0 );
        return 0;
   }

   */


    // Reverse Way ( recursion explanation )

    /*
        // Call stack

        main() -> recursion_ex() : 1
        recursion_ex() : 2 -> wait..
        recursion_ex() : 3 -> wait..
        recursion_ex() : 4 -> wait..
        recursion_ex() : 5 -> wait..
        recursion_ex() : 6 -> return ( as i is equal to 6: return; )


        recursion_ex() : 6 -> remove
        recursion_ex() : 5 -> remove
        recursion_ex() : 4 -> remove
        recursion_ex() : 3 -> remove
        recursion_ex() : 2 -> remove
        recursion_ex() : 1 -> remove


        // Terminal ( waiting position )

        print: 5
        print: 4
        print: 3
        print: 2
        print: 1

        
    
    */

    // void recursion_ex( int i )
    // {
    //     if(i==6) return;
    //     recursion_ex(i+1);

    //     printf("%d ",i);
    // }

    // int main()
    // {
    //     recursion_ex(1);
    // }


    // main -> count -> 120 / 10 = 12 wait..
    // count -> 12 / 10 = 1 wait..
    // count -> 1 / 10 = 0 wait..
    // count -> return as it's 0

    // result: print -> 0
    // print -> 1
    // print -> 12


    int count(int n)
    {
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + count(n / 10);
    }
    }


    int main() {
        
        int n = 1204;
        int d = count(n);
        printf("%d\n",d);

        return 0;
    }