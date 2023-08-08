
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


    bool perfectBT( Node * root )
    {
        // base case
        if(root==NULL) return true;
        // leaf node
        if( root->left == NULL && root->right == NULL ) return true;
        if( root->left == NULL || root->right == NULL ) return false;
        bool l = perfectBT(root->left);
        bool r = perfectBT(root->right);
        // if both leaf node doesn't exist
        if( l == false || r == false ) return false;
        return true;
    }

    int main()
    {
        Node * root = inputTree();
        bool result = perfectBT(root);

        if(result) cout<<"YES";
        else cout <<"NO";

        return 0;
    }