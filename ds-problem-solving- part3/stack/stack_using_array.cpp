
    #include <bits/stdc++.h>
    using namespace std;

    class myStack
    {
        public:
            vector <int> v;
        
        void push( int val )
        {
            v.push_back(val);
        }

        void pop()
        {
            v.pop_back();
        }

        int top()
        {
            return v.back();
        }

        int size()
        {
            return v.size();
        }

        bool empty()
        {
            if( v.size() == 0 ) return true;
            else return false;
        }

    };

    int main()
    {
        /*
        myStack st;
        
        st.push(10);
        st.push(20);
        cout <<"Top-> "<<st.top() <<endl;

        st.pop();
        cout <<"Top-> "<<st.top() <<endl;

        st.pop();
        // cout <<"Top-> "<<st.top() <<endl; // garbage as there is no val

        st.push(30);
        if( st.empty() ) cout <<"empty";
        else cout <<"Top-> "<<st.top() <<endl;
        */


       // -----------

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