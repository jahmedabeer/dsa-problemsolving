
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        // pattern
        /* input - 3
              \  /
               X
             /  \
        */
        
        int n;
        cin >>n;

        int row = n, col = n;

        for( int r = 1; r <= row; r++ )
        {
            for( int c = 1; c <= col; c++ )
            {
                int middle = (n+1) / 2; // middle index
                if( r == middle && c == middle ) cout <<"X";
                else if( r == c) cout <<"\\"; // row equeal col
                else if( (r + c) == n+1 ) cout <<"/";
                else cout <<" ";
            }
            cout <<endl;
        }

        return 0;
    }