    
    #include <stdio.h>


    int main()
    {
        
        int row,col;
        scanf("%d %d",&row,&col);

        int diagonal[row][col];
        for( int i = 0; i < row; i++ )
        {
            for( int j = 0; j < col; j++ )
            {
                scanf("%d",&diagonal[i][j]);
            }
        }

        /*====== primary diagonal ======*/ /*

        int flag = 1; // true

        // check if it's square ( row equal col )
        if( row != col )
        {
            flag = 0;
        }


        for( int i = 0; i < row; i++ )
        {
            for( int j = 0; j < col; j++ )
            {
                // printf("%d%d ",i,j);
                // printf("%d ",diagonal[i][j]);

                // skip
                if( i == j ) continue;

                if( diagonal[i][j] != 0 )
                {
                    flag = 0;
                }
            }
            // printf("\n");
        }


        if( flag )
        {
            printf("Primary Diagonal");
        }
        else printf("Not Diagonal");


        */ /*====== end primary diagonal ======*/




        /*====== secondary diagonal ======*/

        int flag = 1; // true

        // check if it's square ( row equal col )
        if( row != col )
        {
            flag = 0;
        }


        for( int i = 0; i < row; i++ )
        {
            for( int j = 0; j < col; j++ )
            {

                // skip
                if( i + j == row-1 ) continue;

                if( diagonal[i][j] != 0 )
                {
                    flag = 0;
                }
            }
            
        }


        if( flag )
        {
            printf("Secondary Diagonal");
        }
        else printf("Not Diagonal");


        /*====== end secondary diagonal ======*/
        
    
        
        return 0;
    }