#include <stdio.h>
#include <string.h>
int main()
{
    
    char s[100001];
    fgets(s,100001,stdin);

    for( int i = 0; i < strlen(s); i++ )
    {
        if( s[i] >= 97 && s[i] <= 122 )
        {
            int uppercase = s[i] - 32;
            printf("%c",uppercase);
        }
        else if( s[i] >= 65 && s[i] <= 90 )
        {
            int lowercase = s[i] + 32;
            printf("%c",lowercase);
        }
        else if( s[i] == 44 )
        {
            printf("%c",32);
        }
    }

    return 0;
}