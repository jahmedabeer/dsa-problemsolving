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

    // two pointers technique ( swap method )
    int i = 0, j = num - 1;

    while( i < j )
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;

        i++;
        j--;
    }

    for( int n = 0; n < num; n++ )
    {
        printf("%d ", ar[n]);
    }

    return 0;
}