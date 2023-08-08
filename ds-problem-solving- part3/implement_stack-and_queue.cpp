
    #include <bits/stdc++.h>
    using namespace std;

    class myStack
    {
        public:
            vector <int> ar;
        
        void push( int val )
        {
            ar.push_back(val);
        }

        void pop()
        {
            ar.pop_back();
        }

        int size()
        {
            return ar.size();
        }

        int top()
        {
            return ar.back();
        }

        bool empty()
        {
            if( ar.size() == 0 ) return true;
            else return false;
        }
    };

    class myQ
    {
        public:
            list <int> q;

        void push(int val)
        {
            q.push_back(val);
        }

        void pop()
        {
            q.pop_front();
        }

        int size()
        {
            return q.size();
        }

        int top()
        {
            return q.front();
        }

        bool empty()
        {
            if( q.size() == 0 ) return true;
            else return false;
        }
    };

    int main()
    {

        myStack st;
        myQ q;

        int n,m;
        cin>>n>>m;

        for( int i = 0; i < n; i++ )
        {   
            int v;
            cin >>v;
            st.push(v);
        }

        for( int i = 0; i < m; i++ )
        {   
            int v;
            cin >>v;
            q.push(v);
        }

        bool flag = true;
        int listLength = st.size() == q.size();

        while( !st.empty() && !q.empty() )
        {
            int stValue = st.top();
            st.pop();

            int qValue = q.top();
            q.pop();

            if( stValue != qValue )
            {
                flag = false; break;
            }
        }

        if( flag && listLength ) cout <<"YES";
        else cout <<"NO";
        
        

        return 0;
    }