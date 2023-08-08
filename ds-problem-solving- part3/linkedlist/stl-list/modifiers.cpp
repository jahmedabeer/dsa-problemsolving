
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        list <int> newList = {4,5,6,7,8};
        list <int> userList;

            // assign
        userList = newList;
        // userList.assign( newList.begin(),newList.end() );

            // insert at tail
        userList.push_back(100);
            // insert at head
        userList.push_front(200);
            // delete tail
        userList.pop_back();
            // delete head
        userList.pop_front();

            // insert
        userList.insert( next( userList.begin(), 2 ), 100 );
        userList.insert( next( userList.begin(), 3 ), {200,500,300} );

            // delete
        userList.erase( next(userList.begin(),5) );
        userList.erase( next(userList.begin(),5), next(userList.begin(),7) );


        for( int val: userList ) cout <<val <<" ";

        return 0;
    }