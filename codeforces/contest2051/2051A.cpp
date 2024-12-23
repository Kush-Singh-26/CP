#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n),b(n);
        for(int i = 0;i<n;i++)
            cin >> a[i];
        for(int i = 0;i<n;i++)
            cin >> b[i];
        ll diff = 0;
        for(int i = 0 ;i<n-1;i++)
        {
            if(a[i]-b[i+1] > 0)
                diff += a[i] - b [i+1];
        }
        diff += a[n-1];
        cout << diff << "\n";
    }
}