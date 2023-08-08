
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int t; cin>>t;
        while(t--)
        {
            int n; cin >>n;
            int ar[n];
            for( int i = 0; i < n; i++ ) cin >>ar[i];

            map<int,int> mp;
            for( int i = 0; i < n; i++ ) mp[ar[i]]++;

            int max = 0, maxVal = 0;
            for (auto val : mp)
            {   
                if( val.second > max || (val.second == max && val.first > maxVal) )
                {
                    max = val.second;
                    maxVal = val.first;
                }
            }
            cout <<maxVal <<" " <<max <<endl;
        }
        return 0;
    }