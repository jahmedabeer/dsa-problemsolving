#include <stdio.h>
#include <string.h>
int main()
{
    
    char a[100], b[100];
    scanf("%s %s", a, b);

    int lengthof_a = strlen(a);
    int i = 0;
    while ( i <= strlen(b) )
    {
        a[lengthof_a] = b[i];
        lengthof_a++;
        i++;
    }

    /*    // starcat
    strcat(a,b);
    */

    printf("%s",a);
    
    

    return 0;
}