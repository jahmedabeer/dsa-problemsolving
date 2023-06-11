    
    #include <bits/stdc++.h>
    using namespace std;

    class Human
    {
        public:
            string name;
            int age;
            int wealth;

        // A constructor is a function with the same name as its class; it's called automatically when an object is created and has no return type.
        Human(int hg, int hw, const string& hn)
        {
            age = hg;
            wealth = hw;
            name = hn;
        }
    };

    int main()
    {
        Human alex(24, 80, "Alex");

        cout <<alex.name <<endl <<alex.age <<endl <<alex.wealth;

        return 0;
    }
