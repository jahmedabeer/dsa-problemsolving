
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        
        /*
        string a = "Hello", b = " World";
        // append string
        cout <<a+b <<endl;
        // a+=b;
        a.append(b);
        cout <<a <<endl;
        */

       /*
       string a = "heloo-";
       // add character to the last of the index
       a = a + "A";
       a.push_back('D');
       // a[7] = 'd'; -> wrong way
       cout <<a <<endl;

       // remove character to the last of the index
       a.pop_back();
       cout <<a <<endl;
       */

      string str = "HellooWorld";
    
      /* // assign
      str.assign("Oh Wow!");
      str = "Helooo";
      cout <<str;
      */

     str.erase(3,2); // (start index,count)
     cout <<str <<endl;

     str.replace(3,2,"--");
     cout <<str <<endl;

     str.insert(3,"o w");
     cout <<str;


     

        return 0;
    }