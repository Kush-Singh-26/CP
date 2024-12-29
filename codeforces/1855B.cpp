#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
    The max interval will start from 2.
*/

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        int count = 1;
        for(ll i = 2; n%i == 0 && i<=n;i++)
            count++;
        cout << count << "\n";
    }
}