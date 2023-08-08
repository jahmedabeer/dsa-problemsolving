
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        // key value pair
        
        map <string, int> mp;

        mp.insert({ "Rahim", 45 });
        mp.insert({ "Abdul", 25 });
        // mp.insert({ "Moki", 49 });

        // if( mp.count("Moki") ) cout <<"true";
        // else cout <<"false";

        for( auto it = mp.begin(); it != mp.end(); it++ )
        {
            cout <<it->first <<" " <<it->second <<endl;
        }

        return 0;
    }