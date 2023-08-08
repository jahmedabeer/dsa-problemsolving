
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
    void print_list( Node * head )
    {
        Node * tmp = head;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
        }
    }

    void reverse( Node * head, Node * tail )
    {
        Node * i = head;
        Node * j = tail;

        while( i != j && i->next != j )
        {
            swap(i->val,j->val);
            i = i->next;
            j = j->prev;
        }
    }

    int main()
    {
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

        reverse(head,tail);
        print_list(head);

        return 0;
    }