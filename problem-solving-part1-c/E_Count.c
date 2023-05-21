#include <stdio.h>
#include <string.h>
int main()
{
    
    char s[1000001];
    scanf("%s",s);

    int sl = strlen(s);
    int i = 0, sum = 0;
    while( i < sl )
    {

        sum += s[i] - '0';
        // printf("%d",s[i]-48); // assci

        i++;
    }

    printf("%d",sum);


    return 0;
}