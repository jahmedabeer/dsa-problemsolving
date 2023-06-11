
    // sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.


    #include <bits/stdc++.h>
    using namespace std;

    class Student
    {
        public:
            string name;
            int roll;
            int marks;
    };


    bool compareStudents( Student a, Student b )
    {
        
        if( a.marks == b.marks ) return a.roll < b.roll; // ascending
        else return a.marks > b.marks; // descending
    }


    int main()
    {
        int n;
        cin >>n;

        Student sta[n];
        for( int i = 0; i < n; i++ )
        {
            cin >>sta[i].name >>sta[i].roll >>sta[i].marks;
        }

        sort( sta, sta+n, compareStudents );

        for( int i = 0; i < n; i++ )
        {
            cout <<sta[i].name <<" " <<sta[i].roll <<" " <<sta[i].marks <<endl;
        }

        return 0;
    }