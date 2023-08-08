
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

    Node * convert( int ar[], int l, int r )
    {
        //base case
        if( l > r ) return NULL;

        int mid = (l+r)/2;
        Node * root = new Node(ar[mid]);
        Node * leftRoot = convert(ar,l,mid-1);
        Node * rightRoot = convert(ar,mid+1,r);
        root->left = leftRoot;
        root->right = rightRoot;
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

    int main()
    {
        
        int n; cin>>n;
        int ar[n]; // sorted array given
        for( int i = 0; i < n; i++ ) cin>>ar[i];

        Node * root = convert(ar,0,n-1);
        printTree_levelOrder(root);

        return 0;
    }