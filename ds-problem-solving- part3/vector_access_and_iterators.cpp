
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        vector<int> v = {3,4,5,2,4,32};

        // last element
        // cout <<v[v.size()-1] <<endl;
        // cout <<v.back();

        // first element
        // cout <<v[0] <<endl;
        // cout <<v.front();

        // iterator
        vector<int>::iterator it;
        for( it = v.begin(); it < v.end(); it++ )
        {
            cout <<*it <<" ";
        }



        return 0;
    }