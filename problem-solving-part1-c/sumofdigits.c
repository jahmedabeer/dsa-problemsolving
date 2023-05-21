// Sum of Digits of a Five Digit Number

#include <stdio.h>

int main()
{
    //  n takes 5 numbers and output sum of these numbers | 45322 -> 16
    int n, sum = 0;
    scanf("%d", &n);

    while( n > 1 ){
        sum = sum + ( n % 10 );
            // n = 45322 -> 45322 % 10 -> sum = 0 + 2;
            // n = 4532 -> 4532 % 10 -> sum = 2 + 2;
            // n = 453 % 10 -> sum = 2 + 2 + 3;
            // n = 45 % 10 -> sum = 2 + 2 + 3 + 5
            // n = 4 % 10 -> sum = 2 + 2 + 3 + 5 + 4 -> 16 [*]
        n = n / 10;
            // n = 45322 -> 45322 / 10 -> n = 4532
            // n = 4532 / 10 -> 453
            // n = 453 / 10 -> 45
            // n = 45 / 10 -> 4
            // n = 4 / 10 -> 0
    }

    printf("%d",sum);
}