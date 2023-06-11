
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        string str;
        cin >> str;

        // access ith index
        cout <<str[1] <<endl;
        cout <<str.at(0) <<endl;
        cout <<str.front() <<endl; // access 0th index

        // access last index
        cout <<str[str.size() - 1] <<endl;
        cout <<str.back() <<endl;


        return 0;
    }