
    #include <bits/stdc++.h>
    using namespace std;

    void st_recursion( stack <int> s )
    {
        if( s.empty() ) return;

        int x = s.top();
        s.pop();

        cout <<s.top() <<endl;

        st_recursion(s);

        // insert top to bottom
        stack <int> st;
        while( !s.empty() )
        {
            st.push(s.top());
            s.pop();
        }

        st.push(x);
        while( !st.empty() )
        {
            s.push(st.top());
            st.pop();
        }
    }

    int main()
    {
        
        stack <int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);


       st_recursion(st);

        return 0;
    }