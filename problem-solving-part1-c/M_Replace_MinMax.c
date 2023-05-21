#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    int maxnum = INT_MIN, minnum = INT_MAX;
    int maxni = 0, minni = 0;
    for( int i = 0; i < n; i++ )
    {
        scanf("%d",&ar[i]);

        if( ar[i] > maxnum )
        {
            maxnum = ar[i];
            maxni = i;
        }

        if( ar[i] < minnum )
        {
            minnum = ar[i];
            minni = i;
        }
        // printf("%d ",ar[i]);

    }

    ar[maxni] = minnum;
    ar[minni] = maxnum;

    for( int i = 0; i < n; i++ )
    {
        printf("%d ",ar[i]);
    }

    // printf("Index: %d %d\n",maxni,minni);
    // printf("Value: %d %d",maxnum,minnum);

    return 0;
}