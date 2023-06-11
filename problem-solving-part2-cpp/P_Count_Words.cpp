
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string str;
        getline(cin,str);

        int count = 0; bool found = false;

        for( int i = 0; i < str.size(); i++ )
        {
            char ch = str[i];
            if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
            {
                if( found == false ) count++;
                found = true;
            }
            else
            {
                found = false;
            }
        }


        cout <<count;

        return 0;
    }