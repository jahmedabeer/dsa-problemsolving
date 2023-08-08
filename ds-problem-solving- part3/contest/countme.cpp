
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        int t; cin >>t;
        cin.ignore();

        while(t--)
        {
            string str; getline(cin,str);
            
            string word;
            stringstream ss(str);

            map<string,int> mp;
            int max = 0;
            string finalWord;
            while( ss >> word )
            {
                mp[word]++;
                if( mp[word] > max )
                {
                    max = mp[word];
                    finalWord = word;
                }
            }
            cout <<finalWord <<" " <<max <<endl;
        }

        return 0;
    }