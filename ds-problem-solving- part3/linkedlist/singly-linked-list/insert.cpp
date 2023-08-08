
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
    };

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

    void insert( Node * head, int pos, int val )
    {
        Node * newNode = new Node(val); // create new node
        Node * tmp = head;
        for( int i = 1; i <= pos-1; i++ )
        {
            tmp = tmp->next; // reach to position
        }
        // cout <<tmp->val <<" "; // tmp = pos - 1
        newNode->next = tmp->next; // connect newNode to next node of pos
        tmp->next = newNode; // connect newNode to prev node
    }

    void insert_at_head( Node * &head, int val )
    {
        Node * newNode = new Node(val);
        newNode->next = head; // connect newNode to prev head
        head = newNode; // update head to newNode
    }

    void insert_at_tail( Node * &head, Node * &tail, int val )
    {
        Node * newNode = new Node(val);
        if( head == NULL )
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int size( Node * head )
    {
        Node * tmp = head;
        int count = 0;
        while( tmp != NULL )
        {
            count++;
            tmp = tmp->next;
        }
        return count;
    }

    int main()
    {
        
        Node * head = new Node(10);
        Node * a = new Node(20);
        Node * b = new Node(30);
        Node * c = new Node(40);
        Node * d = new Node(50);

        Node * tail = d;

        head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;
        cout <<"Tail value: " << tail->val <<endl;

        int pos; cout <<"Enter position & value: ";
        cin >>pos;
        int val; cin >>val;

        if( pos > size(head) ) cout <<"Invalid index"<<endl;
        else if ( pos == 0 ) insert_at_head(head,val);
        else if ( pos == size(head) ) insert_at_tail(head,tail,val);
        else insert(head,pos,val);

        print_linked_list(head);
        cout <<"Tail value: " << tail->val <<endl;
        

        return 0;
    }