
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int n;
        cin >>n;
        
        int ar[n];
        for( int i = 0; i < n; i++ )
        {
            cin >>ar[i];
        }
        
        /* sor( firstindex , size/n ) */
        // sort(ar,ar+3); // 3 digits
        // sort(ar,ar+n); // ascending order
        sort(ar,ar+n,greater<int>()); // descending order

        for( int i = 0; i < n; i++ )
        {
            cout <<ar[i] <<" ";
        }

        return 0;
    }