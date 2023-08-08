
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin >>t;

        while(t--)
        {
            int n; cin>>n;
            vector <int> perls;
            for( int i = 0; i < n; i++ )
            {
                int num; cin>>num;
                perls.push_back(num);
            }

            int thiefCode = 0;
            for (int i = 0; i < n; i++)
            {
                thiefCode ^= perls[i];
            }
            cout <<thiefCode <<endl;
        }

        return 0;
    }