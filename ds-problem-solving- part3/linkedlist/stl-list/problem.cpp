
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        list <string> socialList;

        string val;
        while(true)
        {
            cin >>val;
            if( val == "end" ) break;
            socialList.push_back(val);
        }

        // take queries
        int q; cin>>q;
        // track first element
        auto cur_val = socialList.begin();
        
        string cmd;
        while(q--)
        {
            cin >>cmd;
            
            if( cmd == "visit" )
            {
                string address; cin >>address;
                auto it = find( socialList.begin(),socialList.end(), address );
                
                if ( it != socialList.end() ) 
                {
                    cur_val = it;
                    cout << *cur_val << "\n";
                }
                else cout << "Not Available\n";
            }
            else if( cmd == "next")
            {
                cur_val++;
                if ( cur_val == socialList.end() ) 
                {
                    cur_val--;
                    cout << "Not Available\n";
                }
                else cout << *cur_val << "\n";
            }
            else if( cmd == "prev" )
            {
                if( cur_val != socialList.begin() )
                {
                    cur_val--;
                    cout << *cur_val << "\n";
                }
                else cout << "Not Available\n";
            }
        }

        

        return 0;
    }