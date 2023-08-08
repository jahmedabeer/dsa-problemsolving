
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
            tail = tail->next;
        }

        void pop()
        {
            sze--;
            Node * deleteNode = head;
            head = head->next;
            delete deleteNode;
            if( head == NULL ) tail = NULL;
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


        /*
        q.push(10);
        q.push(20);
        q.push(30);

        cout <<"1: "<<q.front() <<endl;
        q.pop();
        cout <<"2: "<<q.front() <<endl;
        q.pop();
        cout <<"3: "<<q.front() <<endl;
        */
        

        return 0;
    }