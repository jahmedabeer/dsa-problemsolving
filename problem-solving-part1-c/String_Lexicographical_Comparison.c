#include <stdio.h>
#include <string.h>
int main()
{
    
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while( 1 )
    {
        // first ladder
        if( a[i] == '\0' && b[i] == '\0' )
        {
            printf("Equal");
            break;
        }
        else if( a[i] == '\0' )
        {
            printf("a less then b");
            break;
        }
        else if( b[i] == '\0' )
        {
            printf("a greater then b");
            break;
        }

        // second ladder
        if( a[i] == b[i] )
        {
            i++;
        }
        else if( a[i] < b[i] )
        {
            printf("String: a less then b");
            break;
        }
        else
        {
            printf("String: b less then a");
            break;
        }
    }

    /* // strcmp
    int val = strcmp(a,b);
    printf("%d",val);
    */

    return 0;
}