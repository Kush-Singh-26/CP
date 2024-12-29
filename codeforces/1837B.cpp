#include<bits/stdc++.h>
using namespace std;

/*
    max. no of cosecutive same char will be the ans
    min count = 1
*/

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string str; cin >> str;
        int count = 1, ans = 1;
        for(int i=1;i<str.size();i++)
        {
            if(str[i] != str[i-1])
            {
                count = 1;
            }
            else
                count++;
            ans = max(count,ans);
        }
        cout << ans+1 << "\n";
    }
}