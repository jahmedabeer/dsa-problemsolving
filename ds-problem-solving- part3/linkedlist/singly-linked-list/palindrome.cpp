
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

    void insert_at_tail( Node * &head, Node * &tail, int val )
    {
        Node * newNode = new Node(val);
        if( head == NULL )
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void reverse( Node * &head, Node * cur )
    {
        if( cur->next == NULL )
        {
            head = cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }


    int main()
    {
        Node * head = NULL;
        Node * tail = NULL;
        int val;

        while( true )
        {
            cin >>val;
            if( val == -1 ) break;
            else insert_at_tail(head,tail,val);
        }
        
        // clone list
        Node * cloneHead = NULL;
        Node * cloneTail = NULL;
        Node * tmp = head;
        while( tmp != NULL )
        {
            insert_at_tail(cloneHead,cloneTail,tmp->val);
            tmp = tmp->next;
        }

        // print_linked_list(head);

        reverse(cloneHead,cloneHead);
        // cout<<endl;
        // print_linked_list(cloneHead);

        tmp = head;
        Node * cloneTmp = cloneHead;
        bool flag = true;
        while( tmp != NULL )
        {
            if( tmp->val != cloneTmp->val )
            {
                flag = false;
                break;
            }
            else flag = true;

            tmp = tmp->next;
            cloneTmp = cloneTmp->next;
        }

        if(flag) cout <<"YES";
        else cout <<"NO";

        return 0;
    }