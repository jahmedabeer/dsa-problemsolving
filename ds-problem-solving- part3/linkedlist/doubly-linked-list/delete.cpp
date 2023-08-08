
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * prev;
            Node * next;
        
        // constructor
        Node( int val )
        {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
    };

    // print left to right
    void print_left_to_right( Node * head )
    {
        Node * tmp = head;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
        }
    }

    // print right to left
    void print_right_to_left( Node * tail )
    {
        Node * tmp = tail;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->prev;
        }
    }

    // list size
    int list_size( Node * head )
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
    

    // delete position
    void delete_pos( Node * head, int pos )
    {
        Node * tmp = head;
        for( int i = 1; i <= pos-1; i++ )
        {
            tmp = tmp->next;
        }
        Node * deleteNode = tmp->next; // store node that would be deleted
        tmp->next = tmp->next->next; // connect next node
        tmp->next->prev = tmp; // connect prev node
        delete deleteNode;
    }

    // delete tail
    void delete_tail( Node * &tail )
    {
        Node * delNode = tail;
        tail = tail->prev; // latest tail
        delete delNode; // delete previous tail
        tail->next = NULL; // tail-> nexnode -> null
    }

    // delete head
    void delete_head( Node * &head )
    {
        Node * delNode = head;
        head = head->next;
        delete delNode;
        head->prev = NULL;
    }

    int main()
    {
        // testcase
        // Node * head = NULL;
        // Node * tail = NULL;

        // create node
        Node * head = new Node(10);
        Node * a = new Node(20);
        Node * b = new Node(30);
        Node * c = new Node(40);

        // connect node
        head->next = a;
        a->prev = head;
        a->next = b;
        b->prev = a;
        b->next = c;
        c->prev = b;

        // track tail
        Node * tail = c;

        int pos; cin >>pos;
        
        // invoke
        if( pos >= list_size(head) ) cout <<"Invalid"<<endl;
        else if( pos == 0 ) delete_head(head);
        else if( pos == list_size(head)-1 ) delete_tail(tail);
        else delete_pos(head,pos);
        

        print_left_to_right(head);
        cout<<endl;
        print_right_to_left(tail);
        

        return 0;
    }