
    #include <bits/stdc++.h>
    using namespace std;

    class Dog
    {
        public:
            string breed;
            string color;
            int size;
    };

    int main()
    {
        Dog da[3];

        for( int i = 0; i < 3; i++ )
        {
            getline( cin,da[i].breed );
            cin >>da[i].size >>da[i].color;
            cin.ignore(); // ignore enter
        }

        for( int i = 0; i < 3; i++ )
        {
            cout <<da[i].breed <<" " <<da[i].size <<" " <<da[i].color <<endl;
        }
        

        return 0;
    }