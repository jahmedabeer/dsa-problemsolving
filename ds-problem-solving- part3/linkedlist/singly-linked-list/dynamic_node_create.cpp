
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * next;

        Node( int val )
        {
            this->val = val;
            this->next = NULL;
        }
    };

    int main()
    {

        Node * head = new Node(10);
        Node * b = new Node(20);

        cout <<"pointer: "<<(*head).next <<" Value: " <<(*head).val<<endl;

        head->next = b; // pointer

        cout <<head->val<<endl;
        cout <<head->next->val<<endl;
        cout <<(* (*head).next ).val;

        return 0;
    }