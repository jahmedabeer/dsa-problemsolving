
    #include <bits/stdc++.h>
    using namespace std;

    void print( stringstream & ss )
    {
        string word;
        if( ss >> word )
        {
            print(ss);
            cout <<word <<endl;
        }
    }

    int main()
    {
        
        string str;
        getline(cin,str);

        stringstream ss(str);
        print(ss);
        

        return 0;
    }