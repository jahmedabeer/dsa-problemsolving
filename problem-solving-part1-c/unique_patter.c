    
    #include <stdio.h>
    #include <limits.h>


    int main()
    {
        
        int n;
        scanf("%d",&n);

        int half = n / 2 +1;
        for( int i = 1; i <= n; i++ )
        {
            
            for( int j = 1; j <= n; j++ ){
                
                if( i == half || j == half){
                    printf("#");
                    continue;
                }

                printf("*");

            }
            printf("\n");
        }
        
        return 0;
    }