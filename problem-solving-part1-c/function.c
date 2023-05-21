#include <stdio.h>

/*
    function skeleton

    return type name()
    {
        code
        return what?
    }

*/

/*
    //  -- Return + Parameter
    int sum( int x, int y )
    {
        int sum = x + y;
        return sum;
    }

int main()
{
    
    int result = sum(30,30);
    printf("%d",result);

    return 0;
}
*/


/*
    // -- Return + No Parameter
    int sum( void ) // void [ value can't be given ]
    {
        int x,y;
        scanf("%d %d", &x, &y);

        int sum = x + y;
        return sum;
    }

int main()
{
    int result = sum(); // no value
    // int result = sum(5); // error
    printf("%d",result);
    return 0;
}

*/

/*
    // -- No Return + Parameter
    void sum( int x, int y )
    {
        int result = x + y;
        printf("%d",result);
        // return; // means you can't return anything
    }

int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    
    sum(x,y);

    return 0;
}

*/

    // -- No Return + No Parameter
    void sum( void )
    {
        int a , b, sum;
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("%d",sum);
    }


int main()
{
    sum();

    return 0;
}



    
    /*

    int count_before_zero( int ar[], int n )
    {
        int count = 0;
        
        for( int i = 0; i < n; i++ )
        {
            scanf("%d",&ar[i]);
        }

        for( int i = 0; i < n; i++ )
        {
            if( ar[i] == 0 ) break;
            count++;
        }

        return count;
        
    }   

    int main()
    {
        int n;
        scanf("%d",&n);
        int ar[n];

        int result = count_before_zero(ar,n);
        printf("%d",result);
        

        return 0;
    }

    */
    