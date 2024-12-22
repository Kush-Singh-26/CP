#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
    x should be within the min. and the max. possible sum (both including).
    min value = sum of first k no
    max values = sum of last k values
               = sum of all n numbers - sum of (n-k) values
*/

int main()
{
    int t; cin >>t;
    while(t--)
    {
        ll n,k,x; cin >> n >> k >> x;
        ll minval = (k * (k+1))/2;
        ll maxval = ((n * (n+1))/2) - (((n-k) * (n-k+1))/2);
        if(x >= minval && x <= maxval)
            cout << "YES\n";
        else
            cout << "NO\n"; 
    }

    return 0;
}