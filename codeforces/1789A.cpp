#include<bits/stdc++.h>
using namespace std;
/*
    for any 2 number in the array if gcd <= 2 then valid
*/
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++)
            cin >> a[i];
        int g = INT_MAX;
        for(int i =0 ;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                g = min(g, __gcd(a[i],a[j]));
            }
        }
        if(g<=2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}