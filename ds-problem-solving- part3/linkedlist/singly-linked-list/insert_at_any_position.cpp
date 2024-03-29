
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

    void insert_at_tail( Node * &head, int val )
    {
        Node * newNode = new Node(val);

        // exception
        if( head == NULL )
        {
            head = newNode;
            return;
        }

        Node * tmp = head;
        while( tmp->next != NULL )
        {
            tmp = tmp->next;
        }
        // last node
        tmp->next = newNode;
    }

    void printLinkedlist(Node * head)
    {
        cout <<"Linked list: "<<endl;

        Node * tmp = head;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
        }
    }

    void insert_at_position( Node * head, int pos, int val )
    {
        Node * newNode = new Node(val);

        Node * tmp = head;
        for( int i = 1; i <= pos-1; i++ )
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        cout <<"Inserted at pos: "<<pos<<endl;
    }

    int main()
    {
        
        Node * head = NULL;

        while(true)
        {
            cout <<"Option 1: Insert at tail " <<endl;
            cout <<"Option 2: Print linkedlist " <<endl;
            cout <<"Option 3: Insert at position " <<endl;
            cout <<"Option 4: Terminate" <<endl;

            int option;
            cin >>option;

            if( option == 1 )
            {
                cout <<"Enter a value: ";
                int v; cin >>v;

                insert_at_tail(head,v);
            }
            else if( option == 2 )
            {
                printLinkedlist(head);
            }
            else if( option == 3 )
            {
                int pos,val; 
                cout <<"Enter Position: "; cin >>pos;
                cout <<"Enter Value: "; cin >>val;
                insert_at_position(head,pos,val);
            }
            else if ( option == 4 ) break;
            
        }

        return 0;
    }