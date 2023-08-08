
    #include <bits/stdc++.h>
    using namespace std;

    void pf( int * &p )
    {
        *p = 20; // dereference
        cout <<"inside function: "<<*p <<endl;

        // p = NULL;
        // cout <<"Address of p: "<<&p <<endl; // different address

        // track the reference passing ref to parameter
        cout <<"Address of p: "<<&p <<endl; // reference passed
    }

    /*
        int * &p -> The reference to a pointer modify the original pointer.

        ptr = NULL -> Accessing a null pointer can lead to program crashes

        ptr = 20 -> ptr is a pointer, it can't be assigned an integer value directly.
    */

    int main()
    {
        
        int val = 10;
        int * pntr = &val;

        cout <<"Before function call: "<<val <<endl;
        pf(pntr);
        cout <<val <<" "<<*pntr <<endl;

        cout <<"Address of pntr: "<<&pntr <<endl;


        return 0;
    }