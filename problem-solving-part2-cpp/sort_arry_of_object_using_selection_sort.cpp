
    // sort the Students data according to the marks in descending order.


    #include <bits/stdc++.h>
    using namespace std;

    class Student
    {
        public:
            string name;
            int roll;
            int marks;
    };

    int main()
    {
        int n;
        cin >>n;

        Student sta[n];
        for( int i = 0; i < n; i++ )
        {
            cin >>sta[i].name >>sta[i].roll >>sta[i].marks;
        }

        for( int i = 0; i < n-1; i++ )
        {
            for( int j = i+1; j < n; j++ )
            {
                if( sta[i].marks < sta[j].marks )
                {
                    swap( sta[i], sta[j] );
                }
            }
        }

        for( int i = 0; i < n; i++ )
        {
            cout <<sta[i].name <<" " <<sta[i].roll <<" " <<sta[i].marks <<endl;
        }

        return 0;
    }