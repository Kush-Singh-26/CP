#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string str;
        cin >>str;
        int n = str.size();
        string ans = "";
        for(int i = n-1;i>=0;i--)
        {
            if(str[i] == 'w')
                ans.push_back('w');
            else if(str[i] == 'q')
                ans.push_back('p');
            else 
                ans.push_back('q');
        }
        cout << ans << "\n";
    }
}