
    #include <bits/stdc++.h>
    using namespace std;

    namespace HondaBike
    {
        int speed = 345;
    }

    namespace YamahaBike
    {
        int speed = 245;
    }

    using namespace HondaBike;

    int main()
    {
        // cout <<HondaBike::speed <<endl;
        cout <<speed; // using namespace
        
        return 0;
    }