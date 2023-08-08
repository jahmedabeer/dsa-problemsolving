
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
            // initialization
        // list <data type> name // size -> 0
        // list <data type> name(10) // size -> 10

        // list <int> userList;
        // list <int> userList(10);
        // cout <<userList.size();

        // list <int> userList(10,5);
        // cout <<userList.front(); // access head el


            // copying from vector
        // vector <int> v = {2,3,4,5,6};
        // list <int> userList( v.begin(), v.end() );


            // copying from another list
        // list <int> newList = {2,3,4,5,6};
        // list <int> userList(newList);

            // interator
        // for( auto it = userList.begin(); it != userList.end(); it++ )
        // {
        //     cout <<*it <<endl;
        // }

        // range based for loop
        // for( int val: userList ) cout <<val <<endl;


            // capacity
        list <int> userList = {2,3,4,5,6};
        // cout <<userList.max_size();

            // resize
        userList.resize(2); // size 2
        userList.resize(5); // size 5
        userList.resize(5,8); // size 5 and initial val 8
        cout <<userList.size() <<endl;

        for( int val: userList ) cout <<val <<endl;


        return 0;
    }