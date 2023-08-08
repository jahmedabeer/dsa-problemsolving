
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        long long int n, q;
        cin >> n >>q;

        long long int ar[n];
        for( long long int i = 0; i < n; i++ )
        {
            cin >>ar[i];
        }

        // prefix sum
        long long int pre[n];
        pre[0] = ar[0];
        for( long long int i = 1; i < n; i++ ) // c -> O(n)
        {
            pre[i] = ar[i] + pre[i-1]; // ar[i=1] + pre[i-1=0]
            // cout <<"index: "<<i <<" = "<<pre[i] <<endl;
        }

        // Total: c -> O(n+q) -> 10^5 + 10^5 = 10^5
        while( q-- ) // c -> O(q)
        {
            long long int l,r;
            cin >>l >>r;
            // get index ( position - 1 )
            l--; r--;

            long long int sum = 0;
            if( l == 0 ) sum = pre[r];
            else sum = pre[r] - pre[l-1];

            cout <<sum <<endl;
        }

        return 0;
    }