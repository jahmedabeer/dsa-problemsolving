#include <stdio.h>

    int isVowel( char * s, int i )
    {

        if( s[i] == '\0' ) return 0;

        int ans = isVowel( s, i+1 );

        if( s[i] >= 'A' && s[i] <= 'Z' )
        {
            s[i] = s[i] + 32;
        }

        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        {
            return ans + 1;
        }
        else
        {
            return ans;
        }
    }

int main()
{

    char str[201];
    fgets(str,205,stdin);

    int result = isVowel( str, 0 );
    printf("%d",result);

    return 0;
}