
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

    bool search( Node * root, int x )
    {
        if( root == NULL ) return false;
        if( root->val == x ) return true;

        if( x < root->val )
        {
            bool l = search(root->left,x);
            if(l) return true;
            else return false;
        }
        else
        {
            return search(root->right,x);
            // bool r = search(root->right,x);
            // return r;
        }
    }

    int main()
    {
        Node * root = inputTree();
        if( search(root,6) ) cout <<"Found";
        else cout <<"Not Found";

        return 0;
    }