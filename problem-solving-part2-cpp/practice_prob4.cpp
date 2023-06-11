
    #include <bits/stdc++.h>
    using namespace std;

    class Student
    {
        public:
            string name;
            int cls;
            char section;
            int id;
            int math_mark;
            int eng_mark;

        int totalMarks()
        {
            return math_mark + eng_mark;
        }
    };

    bool compareStudents( Student a, Student b )
    {   
        // if total marks is same -> sort by id -> asc
        if( a.totalMarks() == b.totalMarks() ) return a.id < b.id;
        // else / total marks not same -> sort by totalmarks -> des
        else return a.totalMarks() > b.totalMarks();
    }


    int main()
    {
        
        int n;
        cin >>n;

        Student student[n];
        for( int i = 0; i < n; i++ )
        {
            cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id >>student[i].math_mark >>student[i].eng_mark;
            cin.ignore();
        }

        // sort
        sort( student, student+n, compareStudents );


        for( int i = 0; i < n; i++ )
        {   
            cout <<student[i].name <<" " <<student[i].cls <<" " <<student[i].section <<" " <<student[i].id <<" " <<student[i].math_mark <<" " <<student[i].eng_mark <<endl;
        }


        return 0;
    }