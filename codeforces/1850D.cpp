#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
    sorting the array will keep the adjacent no adjacent
    start count, if diff > k reset the count
    max count will be thecorrect sequnce
    => n - max count = no of no to be removed
*/

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n,k; cin >> n >> k;
        vector<ll> a(n);
        for(ll i= 0;i<n;i++)
            cin >> a[i];
        ll index = 1;
        ll ans =0;
        sort(a.begin(),a.end());
        for(ll i=1;i<n;i++)
        {
            if(a[i] - a[i-1] > k)
            {
                ans = max(ans,index);
                index = 1;
            }
            else
            {
                index++;
            }
        }
        ans = max(ans,index);
        cout << n - ans << "\n";

    }
}