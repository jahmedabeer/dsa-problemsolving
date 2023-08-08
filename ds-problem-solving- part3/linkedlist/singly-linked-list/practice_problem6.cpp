
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

    void print_list( Node * head )
    {
        Node * tmp = head;
        while( tmp != NULL )
        {
            cout <<tmp->val <<" ";
            tmp = tmp->next;
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

    void middlenode( Node * head )
    {
        int sz = list_size(head);
        Node * tmp = head;
        for( int i = 1; i <= sz/2; i++ )
        {
            tmp = tmp->next;
        }
        cout <<tmp->val;
    }

    int main()
    {
        Node * head = new Node(1);
        Node * a = new Node(2);
        Node * b = new Node(3);
        Node * c = new Node(4);
        Node * d = new Node(5);
        Node * e = new Node(6);

        head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;
        d->next = e;

        print_list(head);
        cout <<endl;
        middlenode(head);

        return 0;
    }