#include <stdio.h>
int main()
{
    
    int num_of_val;
    scanf( "%d", &num_of_val );

    int nums;
    int even = 0, odd = 0, pos = 0, neg = 0;
    for( int i = 1; i <= num_of_val; i++ )
    {
        scanf( "%d", &nums );
            // printf("%d\n",nums%2); // check odd issue
        
        if( nums % 2 == 0 )
        {
            even++; // even = even + 1 | even += 1
            
        }
        else
        // nums % 2 == 1 // odd issue
        {
            odd++;
        }

        // check positive or negative
        if( nums > 0 )
        {
            pos++;
        }
        else if( nums < 0 ){
            neg++;
        }
        
    }

    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    

    return 0;
}