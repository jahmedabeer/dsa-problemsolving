
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
        if (head == NULL) return;
        cout <<"L -> ";
        Node * tmp = head;
        while (tmp != NULL)
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
        }
        cout <<endl;
    }

    // print right to left
    void print_right_to_left( Node * tail )
    {
        if (tail == NULL) return;
        cout <<"R -> ";
        Node * tmp = tail;
        while (tmp != NULL)
        {
            cout <<tmp->val <<" ";
            tmp = tmp->prev;
        }
        cout <<endl;
    }

    // inset tail
    void insert_at_tail( Node * &head, Node * &tail, int val )
    {
        Node * newNode = new Node(val); // create new node

        // exception
        if( tail == NULL )
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;

    }
    

    // insert at any position
    void insert_at_any_pos( Node * head, int pos, int val )
    {
        Node * newNode = new Node(val);
        Node * tmp = head;

        // reach to prev node
        for( int i = 1; i <= pos-1; i++ )
        {
            // pos-1 position
            tmp = tmp->next;
        }
        // cout <<tmp->val;

        // connect newNode to next node of position
        newNode->next = tmp->next; // 100->next = 30
        // connect pos node to newNode
        tmp->next = newNode; // 20->next = 100

        newNode->next->prev = newNode; // 30->prev = 100
        newNode->prev = tmp; // 100->prev = 20

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

    // insert at head
    void insert_at_head( Node * &head, Node * &tail, int val )
    {
        Node * newNode = new Node(val); // create new node

        // exception
        if( head == NULL )
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head; // 100->next = 10;
        head->prev = newNode; // 10->prev = 100

        head = newNode; // update latest head -> 100
    }

    int main()
    {
        Node * head = NULL;
        Node * tail = NULL;


        int queries; cin>>queries;

        while(queries--)
        {
            int pos,val;
            cin >>pos>>val;

            // invoke
            if( pos > list_size(head))cout <<"Invalid" <<endl;
            else if( pos == 0 ) insert_at_head(head,tail,val);
            else if( pos == list_size(head) ) insert_at_tail(head,tail,val);
            else insert_at_any_pos(head,pos,val);

            if( pos <= list_size(head) ){
                print_left_to_right(head);
                print_right_to_left(tail);
            }
            
        }
        
        return 0;
    }