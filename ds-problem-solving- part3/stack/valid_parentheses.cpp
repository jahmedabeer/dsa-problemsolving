
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        string str;
        cin >>str;
        
        stack <char> stc;
        bool flag = true;

        // extract charactar from string
        for( char ch : str )
        {
            if( ch == '(' || ch == '{' || ch == '[' ) stc.push(ch);
            else
            {
                // no corresponding open bracket
                if( stc.empty() ) flag = false;

                if( stc.top() == '(' && ch == ')' ) stc.pop();
                else if ( stc.top() == '[' && ch == ']' ) stc.pop();
                else if ( stc.top() == '{' && ch == '}' ) stc.pop();
                else flag = false;
            }

        }

        if( flag ) cout <<"true";
        else cout << "false";
        

        return 0;
    }