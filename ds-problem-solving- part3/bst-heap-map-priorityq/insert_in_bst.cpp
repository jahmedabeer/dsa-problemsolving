
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
        public:
            int val;
            Node * left;
            Node * right;
        
        Node( int val )
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
    };


    Node * inputTree()
    {
        int val;
        cin >>val;

        Node * root;
        val == -1 ? root = NULL : root = new Node(val);

        queue <Node*> q;
        if(root) q.push(root);

        while( !q.empty() )
        {
            // track front value
            Node * fr = q.front();
            q.pop();

            // take val as input
            int l, r;
            cin >>l>>r;
            Node * left; Node * right;
            l == -1 ? left = NULL : left = new Node(l);
            r == -1 ? right = NULL : right = new Node(r);

            fr->left = left;
            fr->right = right;

            // push children to q
            if( fr->left ) q.push(fr->left);
            if(  fr->right ) q.push(fr->right);
        }

        return root;
    }

    void printTree_levelOrder( Node * root )
    {
        queue <Node*> q;
        q.push(root);

        while( !q.empty() )
        {
            // track front value
            Node * fr = q.front();
            q.pop();

            // process value
            cout <<fr->val <<" ";

            // push children to q
            if( fr->left ) q.push(fr->left);
            if(  fr->right ) q.push(fr->right);
        }
    }

    void insert( Node * &root, int x )
    {
        if( root == NULL ) 
        {
            root = new Node(x);
            return;
        }
        if( x < root->val )
        {
            if( root->left == NULL ) root->left = new Node(x);
            else insert(root->left,x);
        }
        else
        {
            if( root->right == NULL ) root->right = new Node(x);
            else insert(root->right,x);
        }
    }  

    int main()
    {
        Node * root = inputTree();
        insert(root,13);
        insert(root,45);
        insert(root,27);
        insert(root,22);
        printTree_levelOrder(root);

        return 0;
    }