#include<bits/stdc++.h>
using namespace std;

string abr(string c)
{
    int s = c.size();
    if(s<=10)
        return c;
    string ans = "";
    ans += c[0];
    ans += to_string(s-2);
    ans += c[s-1];
    return ans;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        string c;
        cin >> c;
        cout << (abr(c)) << "\n";
    }
}

