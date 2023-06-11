
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string str;
        getline(cin,str);

        stringstream sg(str);

        string word; int count = 0;
        // sg >> word; cout << word;
        while( sg >> word )
        {
            cout << word <<endl;
            count++;
        }

        cout <<count;

        return 0;
    }