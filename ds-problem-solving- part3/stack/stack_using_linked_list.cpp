
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

    class myStack
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
            newNode->prev = tail;
            tail->next = newNode;
            tail = tail->next;
        }

        void pop()
        {
            sze--;
            Node * deleteNode = tail;
            tail = tail->prev;
            if( tail == NULL ) head = NULL;
            else tail->next = NULL;
            delete deleteNode;
        }

        int top()
        {
            return tail->val;
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
       myStack st;

       int n; cin >>n;
       for( int i = 1; i <= n; i++ )
       {
            int val; cin>>val;
            st.push(val);
       }

       // print stack or access
       while( !st.empty() )
       {
            cout <<st.top() <<endl;
            st.pop(); // delete top
       }
        

        return 0;
    }