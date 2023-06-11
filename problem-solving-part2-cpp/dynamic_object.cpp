    
    #include <bits/stdc++.h>
    using namespace std;

    class Human
    {
        public:
            string name;
            int age;
            int wealth;

            Human(int hg, int hw, const string& hn)
            {
                age = hg;
                wealth = hw;
                name = hn;
            }
    };


    int main()
    {
        Human * Alex = new Human(24,74,"Alex");
        
        // dereference the group
        (*Alex).wealth = 78;
        cout <<(*Alex).wealth<<endl;

        // shortcut
        cout <<Alex->wealth;

        // delete an object
        delete Alex;

        return 0;
    }
