
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int t; cin >>t;
        while(t--)
        {
            int n; cin >>n;
            set<int> s;
            for( int i = 0; i < n; i++ )
            {
                int x; cin >>x;
                s.insert(x);
            }

            // descending order
            for( auto it = s.rbegin(); it != s.rend(); it++ )
            {
                cout <<*it <<" ";
            }
            cout <<endl;
        }
        

        return 0;
    }