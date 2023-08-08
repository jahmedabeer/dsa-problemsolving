
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        vector<int> v;

        // cout <<v.max_size(); // max_capacity

        /*
        cout <<v.capacity() <<endl; // 0
        v.push_back(22);
        cout <<v.capacity() <<endl; // 1
        v.push_back(11);
        cout <<v.capacity() <<endl; // 2
        v.push_back(3);
        cout <<v.capacity(); // 4 ( incease 2x/double)
        */
        
        /*
        // clear don't clear the memory only delete the value 
       v = {20,34,40};
       cout <<v.size() <<endl; // 3
       cout <<v[2] <<endl; // 40
       v.clear();
       cout <<v.size() <<endl; // 0
       cout <<v[2] <<endl; // 40
       */

      v = {23,44,53,90};
      cout <<v.size() <<endl;
      v.resize(2);
    //   v.resize(7);
      v.resize(7,20);
      cout <<v.size() <<endl;
      for( int i = 0; i <v.size(); i++ )
      {
        cout <<v[i] <<" ";
      }







        return 0;
    }