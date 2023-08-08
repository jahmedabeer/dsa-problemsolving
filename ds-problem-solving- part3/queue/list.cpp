
    #include <bits/stdc++.h>
    using namespace std;

    class myq
    {
        public:
           list <int> lst;

        void push( int val )
        {
            lst.push_back(val);
        }

        void pop()
        {
            lst.pop_front();
        }

        int front()
        {
            return lst.front();
        }

        int size()
        {
            return lst.size();
        }

        bool empty()
        {
            return lst.empty();
        }
    };

    int main()
    {
        myq q;

        int n;
        cin>>n;

        for( int i = 0; i < n; i++ )
        {   
            int v;
            cin >>v;
            q.push(v);
        }

        while( !q.empty() )
        {
            cout <<q.front() <<endl;
            q.pop();
        }


        return 0;
    }