
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * next;
            Node * prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    class myq
    {
        public:
            Node * head = NULL;
            Node * tail = NULL;
            int sze = 0;

        void push( int val )
        {
            sze++;
            Node * newNode = new Node(val);
            if( head == NULL )
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }

        void pop()
        {
            sze--;
            Node * deleteNode = head;
            head = head->next;
            if( head == NULL )
            {
                tail = NULL;
                delete deleteNode;
                return;
            }
            head->prev = NULL;
            delete deleteNode;
        }

        int front()
        {
            return head->val;
        }

        int size()
        {
            return sze;
        }

        bool empty()
        {
            if( sze == 0 ) return true;
            else return false;
        }
    };

    int main()
    {
        myq q;

        int n;
        cin>>n;

        for( int i = 0; i < n; i++ )
        {   
            int v;
            cin >>v;
            q.push(v);
        }

        while( !q.empty() )
        {
            cout <<q.front() <<endl;
            q.pop();
        }

    
        return 0;
    }