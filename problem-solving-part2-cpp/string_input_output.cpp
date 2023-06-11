
    #include <iostream>
    #include <string.h>
    using namespace std;

    int main()
    {
        char str[100];
        // cin >>str; // single word
        cin.getline(str,100);

        // cout <<str;
        cout <<strlen(str);

        return 0;
    }