
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string s,t;
        cin >>s>>t;

        stack <char> s1,s2;

        for( char ch : s )
        {
            if( ch == '#' )
            {
                if( !s1.empty() ) s1.pop();
            }
            else
            {
                s1.push(ch);
            }
        }

        for( char ch : t )
        {
            if( ch == '#' )
            {
                if( !s2.empty() ) s2.pop();
            }
            else
            {
                s2.push(ch);
            }
        }

        if( s1 == s2 ) cout <<"true";
        else cout <<"false";

        return 0;
    }