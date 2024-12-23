#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
    if ai and aj are removed the sum becomes :
        x <= [sum - (ai + aj)] <= y  => {ai = a[i] & aj = a[j]}
        { x - sum <= -(ai + aj) <= y - sum } * -1
        sum - y <= [ai + aj] <= sum - x
        y' <= [ai +aj] <= x' 
        y'- ai <= aj <= x'- ai  => fixed ai and find suitable aj  
*/

int main()
{
    int t; cin >>t;
    while(t--)
    {
        ll n,x,y; cin >> n >> x >> y;
        vector<ll> a(n);
        ll sum = 0;
        for(ll i =0;i<n;i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        x = sum-x; // x'
        y = sum-y; // y'

        sort(a.begin(), a.end());
        ll count = 0;
        for(ll i =0;i<n;i++)
        {
            ll lb = lower_bound(a.begin(), a.end(), y - a[i]) - a.begin();
            ll ub = upper_bound(a.begin(), a.end(), x - a[i]) - a.begin();
            count += (ub-lb);
            if(i>=lb && i<ub) //deleted element will also get counted
                count--;
        }

        cout << count/2 << "\n"; // each combination gets counted 2 times      
        
    }
}