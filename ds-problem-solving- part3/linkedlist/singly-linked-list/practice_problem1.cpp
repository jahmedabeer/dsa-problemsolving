
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
    
    void min_and_max( Node * head )
    {
        Node * tmp = head;

        int min_val = INT_MAX, max_val = INT_MIN;

        while( tmp != NULL )
        {
            int val = tmp->val;

            if( val > max_val ) max_val = val; // max
            if( val < min_val ) min_val = val; // min

            tmp = tmp->next;

        }
        cout <<max_val <<" " <<min_val<<endl;
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

        min_and_max(head);

        return 0;
    }