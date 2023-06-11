
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        /* create dynamic array

        int *setVal = new int[5]; // heap memory will provide 0th index

        for( int i = 0; i < 5; i++ )
        {
            cin >>setVal[i];

            cout <<setVal[i] <<" ";
        }

        */


       // Increase size using dynamic array


        // increase size using static array
    //    int ar[5]; // you can't delete it as we don't need it anymore

        // increase size using dynamic array
        int *ar = new int[5];

       for( int i = 0; i < 5; i++ )
       {
            cin >>ar[i];
       }

       int b[7];
       for( int i = 0; i < 5; i++ )
       {
            b[i] = ar[i];
       }

       b[5] = 23, b[6] = 25;
       for( int i = 0; i < 7; i++ )
       {
            cout <<b[i] <<" ";
       }

       // delete ar array / deallocate
       delete [] ar;

        return 0;
    }