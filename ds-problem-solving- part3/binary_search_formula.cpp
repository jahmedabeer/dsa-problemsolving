
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n; cin >>n;

        int ar[n]; // sorted array
        for( int i = 0; i < n; i++ )
        {
            cin >>ar[i];
        }

        int x; cin >>x;
        bool flag = false;

        int l = 0, r = n-1;
        while( l <= r )
        {
            int mid_index = ( l + r ) / 2;

            if( ar[mid_index] == x ) // value found
            {
                flag = true;
                break;
            }

            // not found
            if( x > ar[mid_index] ) // value exist in right or left
            {
                // go right
                l = mid_index + 1;
            }
            else
            {
                // go left
                r = mid_index - 1;
            }


        }

        if( flag ) cout <<"YES";
        else cout <<"NO";

        return 0;
    }