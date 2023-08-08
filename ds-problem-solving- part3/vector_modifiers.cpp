
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        /*
        // assign
        
        // complexity O(1);
        vector<int> x = {10,20,30};
        vector<int> v = {2,3,4};
        v = x; // vector size is same that's why O(1)
        for( int i = 0; i<v.size(); i++)
        {
            cout <<v[i] <<" ";
        }

        // complexity O(N);
        vector<int> x = {10,20,30,40};
        vector<int> v = {2,3,4};
        v = x; // vector size is different
        for( int i = 0; i<v.size(); i++)
        {
            cout <<v[i] <<" ";
        }

        */


       /*
        // insert

        vector<int> v = {34,45,2,1};
        // v.insert(v.begin()+2,80); // 2 no index :insert single val
       
        // inset multiple val
        vector<int> v2 = {73,22,93};
        v.insert(v.begin()+1,v2.begin(),v2.end());   
        for( int x: v )
       {
            cout <<x <<" ";
       }
       */


    /*
      // erase
      vector<int> v = {3,4,53,44,53,34};
    //   v.erase(v.begin()+1);
      v.erase(v.begin()+2,v.begin()+4);
      for( int x: v )
       {
            cout <<x <<" ";
       }
    */


   /*
    // replace
    vector<int> v = {2,3,4,5,2,34,34,5,2,5};
    // replace(v.begin(),v.end(),2,100); // replace 2 with 100
    replace(v.begin(),v.end()-2,2,100); // replace 2 with 100
    for( int x:v )
    {
        cout <<x <<" ";
    }
    */

    // find
    vector<int> v = {2,3,4,5,2,34,34,5,2,5};
    auto it = find(v.begin(),v.end(),2);
    // cout <<*it;
    if( it == v.end() ) cout <<"Not found";
    else cout<<"Found";

        return 0;
    }