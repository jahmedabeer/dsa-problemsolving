
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

    int nodeLevel( Node * root, int x )
    {
        queue < pair<Node*,int> > q;
        // q.push(make_pair(root,1));
        q.push({root,1});

        while(!q.empty())
        {
            pair<Node*,int> parent = q.front();
            // extract node and level from pair
            // node
            Node * node = parent.first;
            // level
            int level = parent.second;
            q.pop();


            // process value
            if(node->val == x) return level;


            // push children to q
            if(node->left) q.push({node->left,level+1});
            if(node->right) q.push({node->right,level+1});
        }
        return 0;
    }

    int main()
    {
        Node * root = inputTree();
        int n; cin>>n;
        int result = nodeLevel(root,n);
        cout <<result;

        return 0;
    }