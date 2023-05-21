#include <stdio.h>
int main()
{
    /*
    int ar[5][3];

    for( int i = 0; i < 5; i++ )
    { // row loop
        
        for( int j = 0; j < 3; j++ )
        { // col loop
            printf("a[%d][%d] ",i,j);
        }

        printf("\n"); // gap per row
    }
    */


   /*
   int ar[5][3];

   for( int i = 0; i < 5; i++ ){

        for( int j = 0; j < 3; j++ )
        {
            scanf("%d",&ar[i][j]);
        }
   }

   for( int i = 0; i < 5; i++ ){

        for( int j = 0; j < 3; j++ )
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
   }
   */



  /*
    // print exact row

    int row, col;
    scanf("%d %d", &row, &col);

    int ar[row][col];

    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < col; j++ )
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int exr;
    scanf("%d",&exr);

    if( row > exr )
    {
        for( int j = 0; j < col; j++ )
        {
            printf("%d ",ar[exr][j]);
        }
        printf("\n");

    }

  */

  // print exact col
  int row, col;
    scanf("%d %d", &row, &col);

    int ar[row][col];

    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < col; j++ )
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int exc;
    scanf("%d",&exc);

    if( col > exc )
    {
        for( int i = 0; i < row; i++ )
        {
            printf("%d ",ar[i][exc]);
        }
    }

    return 0;
}