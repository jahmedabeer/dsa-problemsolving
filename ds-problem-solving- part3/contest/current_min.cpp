
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int n; cin >>n;
        int ar[n];
        for( int i = 0; i < n; i++ ) cin >>ar[i];

        priority_queue < int, vector<int>, greater<int> > pq;
        for( int i = 0; i < n; i++)
        {
            pq.push(ar[i]);
        }

        int q; cin >>q;
        while(q--)
        {
            int cmd; cin >>cmd;

            if( cmd == 0 )
            {
                int x; cin >>x;
                pq.push(x);
                cout <<pq.top() <<endl;
            }
            else if( cmd == 1 )
            {
                if( pq.empty() ) cout <<"Empty" <<endl;
                else cout <<pq.top() <<endl;
            }
            else if( cmd == 2 )
            {
                if(!pq.empty()) pq.pop();
                if( pq.empty() ) cout <<"Empty" <<endl;
                else cout <<pq.top() <<endl;
            }
        }

        return 0;
    }