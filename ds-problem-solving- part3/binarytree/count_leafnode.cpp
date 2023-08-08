
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

    int count_leafnode( Node * root )
    {
        if( root == NULL ) return 0;
        if( root->left == NULL && root->right == NULL ) return 1;
        else
        {
            int l = count_leafnode(root->left);
            int r = count_leafnode(root->right);
            return l+r;
        }
    }

    int main()
    {
        Node * root = inputTree();
        cout <<count_leafnode(root) <<endl;

        return 0;
    }