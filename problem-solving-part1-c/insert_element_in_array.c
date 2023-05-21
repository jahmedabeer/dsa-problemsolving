#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num); // 5

    int ar[num + 1]; // empty room or index

    for( int n = 0; n < num; n++ )
    {
        scanf("%d", &ar[n]);
    }

    int position, val;
    scanf("%d %d", &position, &val);

    for( int i = num; i >= position + 1 /*if(1)+1=2*/; i-- )
    {
        ar[i] = ar[i-1];
        // 10 20 | 20(2) 30(3) 40(4) 50(5)
    }

    ar[position] = val;
    for(int i = 0; i <= num; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}