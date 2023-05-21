#include <stdio.h>
int main()
{
    // end of file (eof)

    int val;

    while( scanf("%d", &val) != EOF )
    {
        if( val == 1999 ){
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}