
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        list <int> userList;

        int val;
        while(true)
        {
            cin >>val;
            if(val==-1) break;
            userList.push_back(val);
        }

        // sort asc
        userList.sort();
        // remove duplicates
        userList.unique();

        for(int val:userList) cout <<val <<" ";
        
        return 0;
    }