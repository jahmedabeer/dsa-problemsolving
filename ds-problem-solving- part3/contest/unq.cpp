
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin >>t;

        while(t--)
        {
            int n; cin>>n;

            vector <int> v;
            int count = 0;

            for( int i = 0; i < n; i++ )
            {
                int num; cin>>num;
                v.push_back(num);
            }

            sort(v.begin(), v.end());

            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[i - 1])
                {
                    count++;
                }
            }

            cout <<count << endl;
        }

        return 0;
    }