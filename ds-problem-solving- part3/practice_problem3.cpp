
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        // get prefix sum [2 4 1 5 3]
        // The prefix sum of the first array is: 2 6 7 12 15.
        // The reverse order is: 15 12 7 6 2.

        int n;
        cin >>n;

        long long ar[n];
        for( int i = 0; i < n; i++ )
        {
            cin >>ar[i];
        }

        long long prefix_sum[n];
        prefix_sum[0] = ar[0];
        for( int i = 1; i < n; i++ )
        {
            prefix_sum[i] = prefix_sum[i-1] + ar[i];
        }

        for( int i = n-1; i >= 0; i-- )
        {
            cout <<prefix_sum[i] <<" ";
        }

        return 0;
    }