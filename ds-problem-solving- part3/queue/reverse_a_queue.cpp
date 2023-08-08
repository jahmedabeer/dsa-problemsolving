
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        queue <int> que;
        que.push(30);
        que.push(50);
        que.push(60);

        stack <int> st;

        while( !que.empty() )
        {
            st.push(que.front());
            que.pop();
        }

        while( !st.empty() )
        {
            que.push(st.top());
            st.pop();
        }
        
        while( !que.empty() )
        {
            cout <<que.front() <<endl;
            que.pop();
        }

        return 0;
    }