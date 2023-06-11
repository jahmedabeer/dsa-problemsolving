
    #include <bits/stdc++.h>
    using namespace std;

    class Student
    {
        public:
            string name;
            int cls;
            char section;
            int id;
    };


    int main()
    {
        
        int n;
        cin >>n;

        Student student[n];
        for( int i = 0; i < n; i++ )
        {
            cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
            cin.ignore();
        }


        for( int i = 0; i < n; i++ )
        {
            cout <<student[i].name <<" " <<student[i].cls <<" " <<student[i].section <<" " <<student[n-i-1].id <<endl;
        }


        return 0;
    }