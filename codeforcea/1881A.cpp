#include<bits/stdc++.h>
using namespace std;

// If s is of 25 char and x is of 1 char
// 1-> 2 -> 4 -> 8 -> 16 -> 32
// therefore max value of count = 6 

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n,m; cin >> n >> m;
        string x; cin >> x;
        string s; cin >> s;
        string temp = x;
        int flag = 0;
        int count = 1;
        while( count<= 6)
        {
            if(temp.find(s) != string :: npos)
            {
                cout << count - 1<< "\n";
                flag = 1;
                break;
            }
            temp += temp;
            count++;
        }
        if(!flag)
            cout << -1 << "\n";
    }
}

