
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int tc;
        cin >>tc;

        while( tc-- )
        {
            int n; cin >>n;
            vector<int> v(n);
            for( int i = 0; i < n; i++ )
            {
                cin >>v[i];
            }
            
            bool flag = true;
            for( int i = 0; i < n-1; i++ )
            {
                if( v[i] > v[i+1] )
                {
                    flag = false;
                    break;
                }
            }

            if(flag) cout <<"YES" <<endl;
            else cout <<"NO" <<endl;

        }

        return 0;
    }