
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
    
    void same_to_same( Node * head, Node * head1 )
    {
        Node * tmp = head;
        Node * tmp1 = head1;
         
        bool flag = true;
        while( tmp != NULL && tmp1 != NULL )
        {
            if( tmp->val != tmp1->val ) 
            {
                flag = false; break;
            }
            // cout <<tmp->val <<" "<< tmp1->val <<endl;
            tmp = tmp->next; tmp1 = tmp1->next;
        }
        if( flag && ( list_size(head) == list_size(head1) ) ) cout <<"YES";
        else cout <<"NO";
    }

    int main()
    {
        
        Node * head = NULL; Node * head1 = NULL;
        Node * tail = NULL;
        int val;

        // input linked list
        while( true )
        {
            cin >>val;
            if( val == -1 ) break;
            else insert_at_tail(head,tail,val);
        }

        while( true )
        {
            cin >>val;
            if( val == -1 ) break;
            else insert_at_tail(head1,tail,val);
        }

        same_to_same(head,head1);

        

        return 0;
    }