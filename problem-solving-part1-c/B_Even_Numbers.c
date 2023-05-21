#include <stdio.h>
int main()
{
    
   // 1 - n inclusive means -> both 1 and n will exist as well

   int num;
   scanf( "%d", &num );

   if ( num == 1 )
   {
    printf("-1");
   }
   else{
      for( int i = 2; i <= num; i+=2 )
      {
        printf("%d\n",i);
      }
   }

   return 0;
}