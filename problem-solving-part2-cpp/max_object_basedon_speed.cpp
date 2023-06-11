
    #include <bits/stdc++.h>
    using namespace std;

    class Dog
    {
        public:
            string breed;
            string color;
            int speed;
    };

    int main()
    {
        Dog da[3];

        for( int i = 0; i < 3; i++ )
        {
            getline( cin,da[i].breed );
            cin >>da[i].speed >>da[i].color;
            cin.ignore(); // ignore enter
        }

        Dog fastestDog;
        fastestDog.speed = INT_MIN;

        for( int i = 0; i < 3; i++ )
        {
            if( da[i].speed > fastestDog.speed ) 
            {
                fastestDog = da[i];
            }
        }
        cout <<fastestDog.breed <<" " <<fastestDog.speed <<endl;
        

        return 0;
    }