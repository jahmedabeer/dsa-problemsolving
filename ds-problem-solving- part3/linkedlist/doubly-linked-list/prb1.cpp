
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            string val;
            Node * prev;
            Node * next;
        
        // constructor
        Node( string val )
        {
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
    };

    // inset tail
    void insert_at_tail( Node * &head, Node * &tail, string val )
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

    void print_left_to_right( Node * head )
    {
        Node * tmp = head;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
        }
    }

    int main()
    {
        Node * head = NULL;
        Node * tail = NULL;

        string val;
        while(true)
        {
            cin >>val;
            if( val == "end" ) break;
            insert_at_tail(head,tail,val);
        }

        // print_left_to_right(head);

        // take queries
        int q; cin>>q;
        // track first element
        Node * cur_node = head;
        
        string cmd;
        while(q--)
        {
            cin >>cmd;
            
            if( cmd == "visit" )
            {
                string address; cin >>address;

                Node * nodeFound = NULL;
                Node * tmp = head;
                while( tmp != NULL )
                {
                    if( tmp->val == address ) nodeFound = tmp;
                    tmp = tmp->next;
                }

                if( nodeFound != NULL )
                {
                    cur_node = nodeFound;
                    cout <<cur_node->val <<endl;
                }
                else cout << "Not Available" <<endl;
            }
            else if( cmd == "next")
            {
                if( cur_node->next != NULL )
                {
                    cur_node = cur_node->next;
                    cout <<cur_node->val <<endl;
                }
                else cout << "Not Available" <<endl;
            }
            else if( cmd == "prev" )
            {
                if( cur_node->prev != NULL )
                {
                    cur_node = cur_node->prev;
                    cout <<cur_node->val <<endl;
                }
                else cout << "Not Available" <<endl;
            }
        }

        

        return 0;
    }