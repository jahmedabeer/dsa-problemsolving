
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int q; cin >>q;
        while(q--)
        {
            stack <char> stc;
            bool flag = false;
            string str; cin >>str;

            // extract charactar from string
            for( char ch : str )
            {
                if( !stc.empty() )
                {
                    if( ch == 'A' && stc.top() == 'B' )
                    {
                        stc.pop();
                    }
                    else if( ch == 'B' && stc.top() == 'A' )
                    {
                        stc.pop();
                    }
                    else
                    {
                        stc.push(ch);
                    }
                }
                else
                {
                    stc.push(ch);
                }
            }

            if( stc.empty() ) flag = true;

            if( flag ) cout <<"YES" <<endl;
            else cout << "NO" <<endl;

        }

        return 0;
    }