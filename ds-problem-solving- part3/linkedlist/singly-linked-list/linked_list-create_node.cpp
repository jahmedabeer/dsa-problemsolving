
    /*
        linkedlist is a -> data structrue
        moneybag -> structure
        money -> data

        why linkedlist?
        // To solve array problems
            - can't allocate sequential memory to array
            - memory available but not sequential
            - dynamic size allocation problem

    */

    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * next;
        
        // constructor
        Node( int val )
        {
            this->val = val;
            this->next = NULL; // as this is pointer
        }
    };

    int main()
    {
        // creating node
        /*
        Node a,b;

        a.val = 10;
        b.val = 20;

        a.next = &b;
        b.next = NULL;

        cout <<a.val <<endl;
        cout <<a.next->val; // dereference
        */

       // constructor journey
       Node a(10); Node b(20);
       
       a.next = &b;


        return 0;
    }