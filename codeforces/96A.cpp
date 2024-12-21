#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int count = 1;
    int n = str.size();

    for(int i =1;i<n;i++)
    {
        if(str[i] == str[i-1])
            count++;
        else count = 1;
        if(count == 7)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}