#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin >> t; 
    while(t--)
    {
        ll n, a, b, c; 
        cin >> n >> a >> b >> c;
        ll sum = a+b+c;
        ll days = n/sum; 
        ll totaldist = days * sum; // distance travelled in 3 days
        ll ans = days * 3;
        
        if(totaldist < n) // if some days are not accounted for
        {
            if(totaldist + a >= n) cout << ans+1 << "\n";
            else if(totaldist + a + b >= n) cout << ans+2 << "\n";
            else cout << ans+3 << "\n";
        }
        else cout << ans << "\n"; 
    }
}
