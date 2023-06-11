
    #include <iostream>
    #include <utility>
    using namespace std;

    void implement_swap( int * a, int * b )
    {
        int val = *a;
        *a = *b;
        *b = val;
    }

    int main()
    {
        int a,b;
        cin >>a >>b;

        // implement_swap(&a,&b);
        // cout <<a <<" " <<b <<endl;

        swap(a,b);
        cout <<a <<" " <<b;

        return 0;
    }