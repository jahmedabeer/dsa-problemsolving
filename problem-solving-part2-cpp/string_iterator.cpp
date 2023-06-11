
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string str;
        cin >>str;

        /*
        // iterate string
        for( int i = 0; i < str.size(); i++ )
        {
            cout <<str[i] <<endl;
        }
        */

    //    string:: iterator i; // instead use auto
       for( auto i = str.begin(); i < str.end(); i++ )
       {
            cout << *i <<endl;
       }

        return 0;
    }