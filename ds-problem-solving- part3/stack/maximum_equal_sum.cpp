
    #include <bits/stdc++.h>
    using namespace std;

    int getSum( stack <int> s )
    {
        int sum = 0;
        while( !s.empty() )
        {
            sum += s.top();
            s.pop();
        }
        return sum;
    }

    int main()
    {
        
        stack<int> stk1, stk2, stk3;

        stk1.push(6); stk1.push(3);
        stk2.push(1); stk2.push(1); stk2.push(3);
        stk3.push(2); stk3.push(1); stk3.push(8);

        int st1Sum = getSum(stk1);
        int st2Sum = getSum(stk2);
        int st3Sum = getSum(stk3);

        while(true)
        {
            // if there is no match, loop will still break because at the end all will be 0
            if( st1Sum == st2Sum && st2Sum == st3Sum ) break;

            if( st1Sum >= st2Sum && st1Sum >= st3Sum )
            {
                st1Sum -= stk1.top();
                stk1.pop();
            }
            else if( st2Sum >= st1Sum && st2Sum >= st3Sum )
            {
                st2Sum -= stk2.top();
                stk2.pop();
            }
            else
            {
                st3Sum -= stk3.top();
                stk3.pop();
            }
        }

        return 0;
    }