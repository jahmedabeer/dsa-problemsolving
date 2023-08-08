
    #include <bits/stdc++.h>
    using namespace std;

    class myStack
    {
        public:
            list <int> userList;
        
        void push( int val )
        {
            userList.push_back(val);
        }

        void pop()
        {
            userList.pop_back();
        }

        int top()
        {
            return userList.back();
        }

        int size()
        {
            return userList.size();
        }

        bool empty()
        {
            if( userList.size() == 0 ) return true;
            else return false;
        }

    };

    int main()
    {
       myStack st;

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