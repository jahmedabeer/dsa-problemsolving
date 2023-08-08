
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * next;
    };

    int main()
    {
        
        Node a; // object
        
        a.val = 20; // set value
        cout <<"Value of a: "<<a.val <<endl;
        cout <<"Pointer of a: "<<a.next <<endl <<endl; // pointer

        Node b; // object

        cout <<"Pointer of b: "<<b.next <<endl;
        a.next = &b; // address of b
        b.next = NULL;
        cout <<"Pointer of b: "<<a.next->next <<endl<<endl;

        b.val = 30;
        cout <<"Value of b: "<<b.val <<endl;
        cout <<"Value of b: "<<a.next->val <<endl;
        cout <<(*a.next).val;

        return 0;
    }