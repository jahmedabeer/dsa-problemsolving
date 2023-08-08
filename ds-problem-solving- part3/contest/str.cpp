
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string s;
        vector <string> str;
        while(getline(cin, s)) 
        {
            string word;
            for( char ch : s )
            {
                if(ch != ' ') word+=ch;
            }
            sort(word.begin(),word.end());
            cout<<word <<endl;
        }

        return 0;
    }