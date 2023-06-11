
    #include <bits/stdc++.h>
    using namespace std;

    class Bugatti
    {
        public:
            int speed;
            string model;
            string color;

        Bugatti( int speed, string model, string color )
        {
            this->speed = speed;
            this->model = model;
            this->color = color;
        }

    };

    int main()
    {
        
        Bugatti * German = new Bugatti( 225, "Vintagez4", "Silver" );
        Bugatti * UK = new Bugatti( 331, "farzx24", "Gold" );

        *German = *UK;
        cout <<German->speed;

        return 0;
    }