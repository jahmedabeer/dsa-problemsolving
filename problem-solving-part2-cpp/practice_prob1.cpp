/*

    You will be given two strings S and X. You need to replace all X from string S with a '$' sign.


    Input Format:

    First line will contain T, the number of test cases.
    Next T lines will contain a line with S and X.


    Sample Input:
    2
    thatsagoodmomentforgoodrelations good
    canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you

    Output:
    thatsa$momentfor$relations
    can$tellmewhereicanfindheriwillbegreatefulto$if$tellmetheanswer



*/


    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        int n;
        cin >>n;
        cin.ignore();

        for( int i = 1; i <= n; i++ )
        {
            string s,x;
            cin >>s;
            cin >>x;
            
            int keySearch = s.find(x,0);

            while ( keySearch < s.size() )
            {
                s.replace( s.find(x,0), x.size(), "$" );

                keySearch = s.find( x, keySearch ++ );
                
            }

            cout << s << endl;
            
        }
        

        return 0;
    }


    