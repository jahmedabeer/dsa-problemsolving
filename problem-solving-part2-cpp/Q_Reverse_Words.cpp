
    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        
        string str;
        getline(cin,str);

        stringstream wordGenerator(str);
        
        string word;
        reverse( word.begin(), word.end() );
        cout <<word;

        while( wordGenerator >> word  )
        {
            reverse( word.begin(), word.end() );
            cout <<" " + word;
        }
        

        return 0;
    }