
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int n, q;
        cin >>n >>q;

        int ar[n];
        for( int i = 0; i < n; i++ ) // c -> O(n)
        {
            cin >>ar[i];
        }

        // sorted array
        sort( ar, ar+n ); // c -> O(nlogn)

        while( q-- ) // c -> O(q) / O(nlgon)
        {
            int x;
            cin >>x;
            
            bool flag = false;

            // binary search
            int l = 0, r = n-1;
            while( l <= r ) // c -> O(logn)
            {
                int mid_index = ( l + r) / 2;
                if( ar[mid_index] == x )
                {
                    flag = true; break;
                }

                if( x > ar[mid_index] )
                {
                    // right side as they are always bigger than left side
                    l = mid_index+1;
                }
                else
                {
                    // left side
                    r = mid_index-1;
                }
            }

            if( flag ) cout <<"found" <<endl;
            else cout <<"not found" <<endl;

        }

        return 0;
    }