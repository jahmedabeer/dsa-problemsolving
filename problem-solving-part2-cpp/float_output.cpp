
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main()
    {
        // iomanip -> input output manipulation

        float a;
        cin >>a;

        // cout <<fixed <<setprecision(2) <<a;
        cout <<fixed <<setprecision(0) <<a;

        return 0;
    }