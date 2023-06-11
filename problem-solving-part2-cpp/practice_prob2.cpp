
    #include <bits/stdc++.h>
    using namespace std;

    class Student
    {
        public:
            string name;
            int cls;
            char section;
            int math_mark;
            int eng_mark;
    };

    void getReverse( Student student[], int n )
    {
        if( n == 0 ) return;

        Student s;
        s = student[n-1]; // start from last index

        cout <<s.name <<" " <<s.cls <<" " <<s.section <<" " <<s.math_mark <<" " <<s.eng_mark <<endl;

        getReverse( student,--n );


        // cout <<student[0].name <<" " <<student[0].cls <<" " <<student[0].section <<" " <<student[0].math_mark <<" " <<student[0].eng_mark <<endl;
    }

    int main()
    {
        
        int n;
        cin >>n;

        Student student[n];
        for( int i = 0; i < n; i++ )
        {
            cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].math_mark >> student[i].eng_mark;
            cin.ignore();
        }

        getReverse( student,n );

        return 0;
    }