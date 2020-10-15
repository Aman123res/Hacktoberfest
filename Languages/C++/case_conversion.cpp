#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(int(str[0]) >= 65 && int(str[0]) <= 90)
        {
            str[0] = int(str[0]) + 32;
            cout << str[0];
        }
        else if(int(str[i] >= 97) && int(str[i] <= 122))
        {
            cout << str[i];
        }
        else if(int(str[i] >= 65) && int(str[i] <= 90))
        {
            cout << "_";
            str[i] = int(str[i]) + 32;
            cout << str[i];
        }
    }
    cout << endl;
    }
}
