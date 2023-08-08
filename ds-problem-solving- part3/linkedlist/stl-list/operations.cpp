
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        list <int> userList = {2,3,6,4,6,5,6,6};

            // remove
        // userList.remove(6);

            // sort asc to desc
        userList.sort();
            // sort desc to asc
        userList.sort( greater<int>() );

            // remove duplicate value ( need to be sorted )
        userList.unique();

            // reverse
        userList.reverse();

        for( int val: userList ) cout <<val <<endl;
        

        return 0;
    }