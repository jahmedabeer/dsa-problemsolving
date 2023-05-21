    
    #include <stdio.h>

    
    void pass_by_ref( int * addressofx )
    {
        
        printf("%d\n",*addressofx);

        // dereference
        *addressofx = 300;
        printf("%d",*addressofx);
    }


    int main()
    {
        int x = 100;

        pass_by_ref(&x);

        return 0;
    }
    