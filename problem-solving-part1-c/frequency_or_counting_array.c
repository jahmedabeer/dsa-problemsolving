#include <stdio.h>
int main()
{
    
    int n;
    scanf("%d",&n);

    int numar[n];
    for( int i = 0; i < n; i++ )
    {
        scanf("%d",&numar[i]);
    }

    int count[7] = {0};
    for( int i = 0; i < n; i++ )
    {

        int val = numar[i];
        count[val]++;


        // if( numar[i] == 0 )
        // {
        //     count[0]++;
        // }

        // if( numar[i] == 4 )
        // {
        //     count[4]++;
        // }
    }

    for(int i = 0; i < n; i++ )
    {
        printf("%d - %d\n",i,count[i]);
    }
    // printf("0 - %d\n",count[0]);
    // printf("4 - %d",count[4]);


    return 0;
}