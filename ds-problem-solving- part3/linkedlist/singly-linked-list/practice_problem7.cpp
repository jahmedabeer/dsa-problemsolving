
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

    void remove_duplicates( Node * head )
    {
        if(head == NULL) return;
        Node * tmp = head;
        while( tmp->next != NULL )
        {
            if( tmp->val == tmp->next->val )
            {
                tmp->next = tmp->next->next;
            }
            if( tmp->next == NULL ) break;
            else if( tmp->val != tmp->next->val ) tmp = tmp->next;
        }
    }

    int main()
    {
        Node * head = new Node(10);
        Node * a = new Node(30);
        Node * b = new Node(30);
        Node * c = new Node(40);
        Node * d = new Node(50);

        head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;

        remove_duplicates(head);
        print_linked_list(head);
        

        return 0;
    }