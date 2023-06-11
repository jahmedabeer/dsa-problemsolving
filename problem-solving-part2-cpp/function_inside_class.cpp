
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

        int carBreak()
        {
            return (speed / 10) * 8;
        }

    };

    int main()
    {
        
        Bugatti German(800,"v1z34","Gold");
        cout <<German.carBreak();

        return 0;
    }