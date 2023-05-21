#include <stdio.h>
#include <string.h>
int main()
{
    
    char s[1001];
    scanf("%s",s);

    
    int is_palindrome = 1; // true
    int i = 0, j = strlen(s)-1;
    while( i < j )
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        if( s[i] != s[j] )
        {
            is_palindrome = 0; // false
            break;
        }
        i++;
        j--;
    }

    if(is_palindrome){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}