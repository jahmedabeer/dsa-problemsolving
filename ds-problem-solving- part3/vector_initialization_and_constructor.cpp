
    /*
        STL -> Standard template library ( dsa library )
        Dynamic Array -> Vector

    */

    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        // vector<int> v; // type 1
        // vector<int> v(5); // type 2
        // vector<int> v(5,2); // type 3

        // vector<int> v2(4,100); // type 4
        // vector<int> v(v2); // type 4

        // int a[6] = {1,2,4,5,6,9}; // type 5
        // vector<int> v(a,a+6); // type 5

        vector<int> v={5,6,3};

        cout <<v.size()<<endl;

        for( int i = 0; i <v.size(); i++ )
        {
            cout <<v[i] <<" ";
        }

        return 0;
    }