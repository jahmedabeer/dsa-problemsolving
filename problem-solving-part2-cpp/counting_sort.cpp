
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int n;
        cin >>n;

        int frq[26] = {0};
        for( int i = 0; i < n; i++ )
        {
            char ch;
            cin >>ch;
            frq[ ch-97 ]++;
        }

        for( int i = 0; i < n; i++ )
        {
            cout <<frq[i];
        }

        // for( char i = 'a'; i <= 'z'; i++ )
        // {
        //     if( frq[i-97] > 0 )
        //     {
        //         for( int j = 0; j < frq[i-97]; j++ )
        //         {
        //             cout <<i;
        //         }
        //     }
        // }


        return 0;
    }