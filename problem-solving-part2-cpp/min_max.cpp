
    #include <iostream>
    #include <algorithm>
    using namespace std;

    int implement_min(int  a, int  b)
    {
        if( a<b ) return a;
        else return b;
    }

    int implement_max(int  a, int  b)
    {
        if( a>b ) return a;
        else return b;
    }

    int main()
    {
        int a,b;
        cin >> a >> b;

        int minval = implement_min(a,b);
        int maxval = implement_max(a,b);
        cout <<minval <<" " <<maxval <<endl;

        int defaultmin = min(a,b);
        int defaultmax = max(a,b);
        cout <<defaultmax <<" " <<defaultmin <<endl;

        return 0;
    }