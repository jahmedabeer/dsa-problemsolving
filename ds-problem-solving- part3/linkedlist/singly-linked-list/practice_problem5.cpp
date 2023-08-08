
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

    void insert_at_tail( Node * &head, Node * &tail, int val )
    {
        Node * newNode = new Node(val);

        // exception
        if( head == NULL )
        {
            head = newNode;
            tail = newNode;
            return;
        }
        
        tail->next = newNode; // connect to newNode as a tail
        tail = newNode; // update latest tail
    }

    void inset_at_head( Node * &head, Node * &tail, int val )
    {
        Node * newNode = new Node(val);
        if( head == NULL )
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head; // connect to newNode as a head
        head = newNode; // update latest head
    }


    int main()
    {
        
        Node * head = NULL;
        Node * tail = NULL;

        int q; cin>>q;
        while (q--)
        {
            int x; cin>>x;
            int val; cin>>val;

            if( x == 0 ) inset_at_head(head,tail,val);
            else insert_at_tail(head,tail,val);

            cout << head->val << " " << tail->val << endl;
            
        }

        return 0;
    }