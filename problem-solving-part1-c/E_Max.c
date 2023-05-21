#include <stdio.h>
#include <limits.h>
int main()
{
    
    int num_of_value;
    scanf("%d",&num_of_value);

    int nums;
    int maxnum = INT_MIN, minnum = INT_MAX;
    for( int i = 1; i <= num_of_value; i++ )
    {
        scanf("%d", &nums);
        
        if( nums > maxnum )
        {
            maxnum = nums;
        }
        // if ( nums < minnum )
        // {
        //     minnum = nums;
        // }
    }

    printf("%d",maxnum);
    // printf("%d",minnum);



    return 0;
}