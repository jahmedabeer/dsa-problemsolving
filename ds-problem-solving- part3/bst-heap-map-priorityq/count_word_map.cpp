
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string sentence;
        getline(cin,sentence);

        string word;
        stringstream ss(sentence);
        map<string,int> mp;
        while( ss>>word ) mp[word]++;

        cout <<mp["kochi"]; // 2 times

        return 0;
    }