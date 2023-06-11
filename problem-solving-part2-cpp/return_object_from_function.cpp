    
    #include <bits/stdc++.h>
    using namespace std;

    class Human
    {
    public:
        string name;
        int age;
        int wealth;

        Human(int hg, int hw, string hn)
        {
            age = hg;
            wealth = hw;
            name = hn;
        }
    };

    Human humanM()
    {
        char name[100] = "Molla Alex";
        Human Alex(24,80,name);
        return Alex; // Retrun value optimization
    }



    int main()
    {
        Human alex = humanM();
        
        cout <<alex.name;

        return 0;
    }
