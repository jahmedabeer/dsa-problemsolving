
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

    void reverse_and_original( Node * node )
    {
        if( node == NULL ) return;
        reverse_and_original(node->next);
        cout <<node->val <<" ";
    }

    void print_linked_list( Node * head )
    {
        Node * tmp = head;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
        }
        cout <<endl;
    }


    int main()
    {
        
        Node * head = NULL;
        Node * tail = NULL;
        int val;

        // input linked list
        while( true )
        {
            cin >>val;
            if( val == -1 ) break;
            else insert_at_tail(head,tail,val);
        }

        reverse_and_original(head);
        cout<<endl;
        print_linked_list(head);

        return 0;
    }