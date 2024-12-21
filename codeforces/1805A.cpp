#include<bits/stdc++.h>
using namespace std;
/*
    To find : 
    (a1⊕x)⊕(a2⊕x)⊕... = 0 for some x
        p⊕q = 0 if p = q. p⊕0 = p
        p⊕q=q⊕p (p⊕q)⊕r = p⊕(q⊕r)
    => (a1 ⊕ x) ⊕ (a2 ⊕ x) ⊕ ... ⊕ (an ⊕ x) = (a1 ⊕ a2 ⊕ ... ⊕ an) ⊕ (x ⊕ x ⊕ ... ⊕ x)
    => if n is even, then ⊕ will cancel each other and ans = 0.
    => if n is odd, then one x will remain, then ans = xor off all the inputs 
*/

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 0;
        for(int i =0;i<n;i++)
        {
            int t; cin >> t;
            ans ^= t;
        }
        if(ans == 0)
            cout << 0 << "\n";
        else
        {
            if(n%2 == 1)
                cout << ans <<"\n";
            else
                cout << -1 << "\n";
        }
    }
}