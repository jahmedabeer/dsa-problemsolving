
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int n, q;
        cin >> n >>q;

        int ar[n];
        for( int i = 0; i < n; i++ )
        {
            cin >>ar[i];
        }

        /* -> Brute force approch
        
            Time limit: 1.5s * 10^7
            TLE: O(nq) n:10^5 q:10^5 = 10^10
        */

        // Total: c -> O(nq)
        while( q-- ) // c -> O(q)
        {
            int l,r;
            cin >>l >>r;
            // get index ( position - 1 )
            l--; r--;
            int sum = 0;

            for( int i = l; i <= r; i++ ) // worst case: c -> O(n)
            {
                sum+=ar[i];
            }
            cout <<sum <<endl;
        }

        return 0;
    }