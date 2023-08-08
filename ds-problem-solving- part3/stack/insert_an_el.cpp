
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int x; cin >>x;
        
        stack <int> myStack;
        myStack.push(7);
        myStack.push(1);
        myStack.push(4);
        myStack.push(5);

        stack <int> newStack;

        while( !myStack.empty() )
        {
            newStack.push(myStack.top()); // 5 4 3 1 7
            myStack.pop();
        }

        while( !newStack.empty() )
        {
            cout <<newStack.top() <<endl; // 7 1 4 5
            newStack.pop();
        }

        newStack.push(x);
        cout <<newStack.top();


        return 0;
    }