
    #include <bits/stdc++.h>
    using namespace std;

    class Dog
    {
        public:
            string breed;
            string color;
            int speed;
    };

    /*
        Compare the speed of dogs li and ri:
        If li.speed is greater than ri.speed, return true to indicate that li should be placed before ri in the sorted order.
        If li.speed is less than or equal to ri.speed, return false to indicate that li should be placed after ri in the sorted order.
    
    */

    bool cmp( Dog li, Dog ri )
    {
        if( li.speed > ri.speed ) return true;
        else return false;
    }

    int main()
    {
        Dog da[3];
        
        for( int i = 0; i < 3; i++ )
        {
            getline( cin,da[i].breed );
            cin >>da[i].speed >>da[i].color;
            cin.ignore(); // ignore enter
        }

        // sort function
        sort( da, da+3, cmp );

        for( int i = 0; i < 3; i++ )
        {
            cout <<da[i].breed <<" " <<da[i].speed <<" " <<da[i].color <<endl;
        }

        return 0;
    }