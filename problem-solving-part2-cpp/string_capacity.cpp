
    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        string userName = "Mo. Hoblos";
        // cout <<userName.size() <<endl; // length
        
        /*
        cout <<userName.capacity() <<endl; // 15 default
        userName = "Mr. Hobols is a good man!";
        cout <<userName.capacity() <<endl; // 30 -> increased capacity dynamically
        */

       /*
       userName.clear(); // make string empty
       cout <<userName.size(); // 0
       */

      /*
      userName = "";
      userName.empty() == true ? cout<<"Empty" : cout<<"Not Empty";
      // return true if string empty else false
      */

     string str;
     cin >>str;

     str.resize(8,'X');
     cout <<str.size();
     cout <<endl <<str <<endl;

     str.resize(5);
     cout <<str.size();
     cout <<endl <<str <<endl;

     str.resize(8,'X');
     cout <<str.size();
     cout <<endl <<str;


        return 0;
    }