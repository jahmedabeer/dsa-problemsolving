
    #include <bits/stdc++.h>
    using namespace std;

    // What is the size of an empty object in C++? -> 1 byte

    class Bike
    {
        public: // access modifier
            char brand[50];
            int cc;
            char color[50];
            int model;
    };

    int main()
    {
        // Yamaha
        Bike Yamaha;
        
        char yn[50] = "Yamaha";
        strcpy(Yamaha.brand,yn); // ( where/dest,to/src )
        Yamaha.cc = 155;
        char yc[50] = "Metallic Black";
        strcpy(Yamaha.color,yc);
        Yamaha.model = 15;

        cout <<"Name:"<<Yamaha.brand <<" CC:"<<Yamaha.cc <<endl;


        // Royal Enfield
        Bike royalEnfield;

        royalEnfield.model = 225;
        char rc[50] = "Brown";
        strcpy(royalEnfield.color,rc);

        cout <<"Model:"<<royalEnfield.model <<" Color:"<<royalEnfield.color <<endl;

        return 0;
    }