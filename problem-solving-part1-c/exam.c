    
    #include <stdio.h>
    #include <limits.h>

    int fun( int search )
    {   
        int num;
        scanf("%d",&num);

        int list[num];
        for( int i = 1; i <= num; i++ )
            {
                scanf("%d ",&list[i]);
            }

            scanf("%d",&search);
            int index = 0;

            for( int i = 1; i <= num; i++ )
            {
                if ( list[i] == search )
                {
                    index = i;
                    break;
                }
                
            }

            return index;

    }


    int main()
    {
        
        int tc,search;
        scanf("%d",&tc);

        
        for( int ti = 1; ti <= tc; ti++ )
        {
            int result = fun(search);
            if( result != 0 )
            {
                printf("Case %d: %d\n",ti,result);
            }
            else printf("Case %d: Not Found\n",ti);
            
        }
        
        return 0;
    }