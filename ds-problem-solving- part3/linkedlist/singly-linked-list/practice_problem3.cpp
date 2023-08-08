
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

    void sort_des( Node * head )
    {
        Node * i;
        for( i = head; i->next != NULL; i = i->next )
        {
            Node * j;
            for( j = i->next; j != NULL; j = j->next )
            {
                if( i->val > j->val ) swap(i->val,j->val);
                // cout <<i->val <<" " <<j->val <<endl;
            }
        }
    }

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
    
    void get_mid( Node * head )
    {
        int sz = list_size(head);

        if( sz % 2 == 0 )
        {
            Node * tmp = head;
            for( int i = sz/2-2; i >= 0; i-- )
            {
                tmp = tmp->next;
            }
            cout<<tmp->next->val <<" " <<tmp->val;
        }
        else
        {
            Node * tmp = head;
            for( int i = 1; i <= sz/2; i++ )
            {
                tmp = tmp->next;
            }
            cout<<tmp->val;
        }
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
        
        sort_des(head);
        get_mid(head);

        return 0;
    }