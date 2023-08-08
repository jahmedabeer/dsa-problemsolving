
    #include <bits/stdc++.h>
    using namespace std;

    void insert_at_max_heap( vector<int> &v, int x )
    {
        v.push_back(x);
        int curntIndx = v.size()-1;
        
        while( curntIndx != 0 )
        {
            int prntIndx = (curntIndx - 1) / 2;
            if( v[prntIndx] < v[curntIndx] )
                swap(v[prntIndx],v[curntIndx]);
            else break;
            curntIndx = prntIndx;
        }
    }

    void dlt_from_heap( vector<int> &v )
    {
        v[0] = v[v.size()-1];
        v.pop_back();

        int curnt_indx = 0;
        while(true)
        {
            int left_indx = curnt_indx * 2 + 1;
            int right_indx = curnt_indx * 2 + 2;
            int last_indx = v.size()-1;

            // check if left nd right index available
            if( left_indx <= last_indx && right_indx <= last_indx )
            {
                // check if left index greater than right index nd current index
                if( v[left_indx] >= v[right_indx] && v[left_indx] > v[curnt_indx] )
                {
                    swap(v[left_indx],v[curnt_indx]);
                    curnt_indx = left_indx;
                }
                else if( v[right_indx] >= v[left_indx] && v[right_indx] > v[curnt_indx] )
                {
                    swap(v[right_indx],v[curnt_indx]);
                    curnt_indx = right_indx;
                }
                else break;
            }
            else if( left_indx <= last_indx )
            {
                if( v[left_indx] > v[curnt_indx] )
                {
                    swap(v[left_indx],v[curnt_indx]);
                    curnt_indx = left_indx;
                }
                else break;
            }
            else if( right_indx <= last_indx )
            {
                if( v[left_indx] > v[curnt_indx] )
                {
                    swap(v[right_indx],v[curnt_indx]);
                    curnt_indx = right_indx;
                }
                else break;
            }
            else break;
        }
    }

    int main()
    {
        int n; cin >>n;
        vector <int> v;
        for( int i = 0; i < n; i++ )
        {
            int x; cin >>x;
            insert_at_max_heap(v,x);
        }
        dlt_from_heap(v);
        for( auto val:v ) cout <<val <<" ";

        return 0;
    }