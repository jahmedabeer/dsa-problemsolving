
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        stack <int> st;
        
        int n; cin >>n;
       for( int i = 1; i <= n; i++ )
       {
            int val; cin>>val;
            st.push(val);
       }

       // print stack or access
       while( !st.empty() )
       {
            cout <<st.top() <<endl;
            st.pop(); // delete top
       }

        return 0;
    }