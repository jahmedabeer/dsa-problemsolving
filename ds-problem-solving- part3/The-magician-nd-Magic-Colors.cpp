
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t; cin >>t;
        while(t--)
        {
            int q; cin >>q;

            stack <char> color, finalColor, filteredColor;
            
            for( int i = 1; i <= q; i++ )
            {
                char ch; cin>>ch;
                
                if( !color.empty() )
                {
                    if( (ch == 'R'  && color.top() == 'B') || (ch == 'B' && color.top() == 'R') )
                    {
                        finalColor.push('P');
                        color.pop();
                    }
                    else if( (ch == 'R' && color.top() == 'G') || (ch == 'G' && color.top() == 'R') )
                    {
                        finalColor.push('Y');
                        color.pop();
                    }
                    else if( (ch == 'B' && color.top() == 'G') || (ch == 'G' && color.top() == 'B') )
                    {
                        finalColor.push('C');
                        color.pop();
                    }
                    else if( (ch == 'G' && color.top() == 'G') || (ch == 'R' && color.top() == 'R') || (ch == 'B' && color.top() == 'B') )
                    {
                        color.pop();
                    }
                    else color.push(ch);
                }
                else color.push(ch);
                
            }

            while (!color.empty())
            {
                finalColor.push(color.top());
                color.pop();
            }

            while (!finalColor.empty())
            {
                filteredColor.push(finalColor.top());
                finalColor.pop();
            }

            while( !filteredColor.empty() )
            {
                char top;

                top = filteredColor.top(); // top tracker
                filteredColor.pop();

                if( !filteredColor.empty() )
                {
                    if( !(top == filteredColor.top()) ) cout <<top;
                }
                else cout <<top;
            }
            cout <<endl;
        }
        return 0;
    }