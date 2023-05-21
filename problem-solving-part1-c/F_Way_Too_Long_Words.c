#include <stdio.h>
#include <string.h>
int main()
{
    
    int times;
    scanf("%d", &times);

    for( int i = 0; i < times; i++ )
    { 
        char s[101];
        scanf("%s",s);

        int length = strlen(s);

        if( length > 10 )
        {
            printf("%c%d%c\n", s[0], length-2, s[length-1]);
        }
        else{
            printf("%s\n",s);
        }
    }

    return 0;
}