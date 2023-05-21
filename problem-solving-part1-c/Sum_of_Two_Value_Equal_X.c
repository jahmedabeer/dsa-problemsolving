#include <stdio.h>
int main()
{
    
    int n;
    scanf("%d",&n);

    int ar[n];
    for( int i = 0; i < n; i++ )
    {   
        scanf("%d", &ar[i]);
    }


    int x;
    scanf("%d",&x);
    
    int flag = 0;
    for( int i = 0; i < n-1; i++ )
    {

        for( int j = i+1; j < n; j++  )
        {
            // printf("%d %d\n",i,j);
            // printf("%d %d\n",ar[i],ar[j]);

            if( ar[i] + ar[j] == x )
            {
                // printf("Yes\n");
                flag = 1;
            }

        }
        
    }

    if( flag )
    {
        printf("Yes");
    }else
    {
        printf("No");
    }

    return 0;
}