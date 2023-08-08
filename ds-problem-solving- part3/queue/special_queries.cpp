
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        queue <string> user;

        int n;
        cin>>n;

        for( int i = 0; i < n; i++ )
        {   
            int cmd;
            cin >>cmd;

            if( cmd == 0 )
            {
                string name; cin >>name;
                user.push(name);
            }
            else
            {
                if( !user.empty() )
                {
                    cout <<user.front() <<endl;
                    user.pop();
                }
                else
                {
                    cout <<"Invalid" <<endl;
                }
            }

        }

        return 0;
    }