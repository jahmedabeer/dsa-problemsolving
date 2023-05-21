#include <stdio.h>
int main()
{
    // ar 1
    int numa;
    scanf("%d", &numa);

    int ara[numa];
    for( int n = 0; n < numa; n++ )
    {
        scanf("%d", &ara[n]);
    }

    // ar 2
    int numb;
    scanf("%d", &numb);

    int arb[numb];
    for( int n = 0; n < numb; n++ )
    {
        scanf("%d", &arb[n]);
    }

    int newar[numa + numb];
    for( int n = 0; n < numa; n++ )
    {
        newar[n] = ara[n];
    }

    int i = numa;
    for( int n = 0; n < numb; n++ )
    {
        newar[i] = arb[n];
        i++;
    }

    for( int n = 0; n < numa + numb; n++ )
    {
        printf("%d ", newar[n]);
    }


    return 0;
}