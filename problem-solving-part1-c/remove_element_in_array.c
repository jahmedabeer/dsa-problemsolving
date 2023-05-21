#include <stdio.h>
int main()
{
    
    int num;
    scanf("%d", &num);

    int ar[num];
    for( int n = 0; n < num; n++ )
    {
        scanf("%d", &ar[n]);
    }

    int position;
    scanf("%d", &position);

    for( int n = position; n < num; n++ )
    {
        ar[n] = ar[n+1];
    }

    for(int i = 0; i < num-1; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}