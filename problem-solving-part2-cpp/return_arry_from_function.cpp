
    #include <bits/stdc++.h>
    using namespace std;

    int * fun()
    {
        // int ar[5]; // static
        int *ar = new int[5]; // dynamic
        for( int i = 0; i < 5; i++ )
        {
            cin >>ar[i];
        }
        return ar;
    }

    int main()
    {   
        int * val = fun();
        for( int i = 0; i < 5; i++ )
        {
            cout <<val[i] <<" ";
        }

        return 0;
    }