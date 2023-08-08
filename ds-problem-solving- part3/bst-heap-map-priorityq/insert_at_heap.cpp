
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        vector <int> v = {50,40,45,30,35,42,32,26,20,10}; // given array

        int x; cin>>x;
        v.push_back(x); // insert value to array

        int curntIndx = v.size()-1;
        
        while( curntIndx != 0 )
        {
            int prntIndx = (curntIndx - 1) / 2;
            if( v[prntIndx] < v[curntIndx] ) // max heap | min heap: v[prntIndx] > v[curntIndx]
                swap(v[prntIndx],v[curntIndx]);
            else break;
            curntIndx = prntIndx;
        }

        for( auto val:v ) cout <<val <<" ";

        return 0;
    }