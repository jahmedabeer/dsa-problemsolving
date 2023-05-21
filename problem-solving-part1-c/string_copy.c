#include <stdio.h>
#include <string.h>
int main()
{
    
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while( i < strlen(b) )
    {
        a[i] = b[i];
        i++;
    }

    // strcpy(a,b);

    printf("%s", a);


    return 0;
}