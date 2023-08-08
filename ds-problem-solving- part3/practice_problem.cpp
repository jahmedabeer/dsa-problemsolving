
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        // find duplicate value

        int n;
        cin >>n;

        int ar[n];
        for( int i = 0; i < n; i++ )
        {
            cin >>ar[i];
        }

        sort(ar,ar+n);

        bool flag = false;
        for( int i = 0; i < n; i++ )
        {
            int j = i+1;
            while( ar[i] == ar[j] )
            {
                flag = true;
                break;
            }
        }

        if( flag ) cout <<"YES";
        else cout <<"NO";


        return 0;
    }