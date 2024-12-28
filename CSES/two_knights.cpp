#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
    total no of ways to place 2 knights :
        1st : in k^3 ways
        2nd : in (k-1)^2 ways
        So total = [k^2 * (k^2 -1)] / 2 ways = a
        (divided by 2 to remove the duplicate cases)
    
    ans = total - no of places from where knight can attack each other

    knight attack happens in a 3x2 block or 2x3 block
    Each block has 2 attacking squares or possibilities

    2x3 and 3x2 block can be arranged in (k-1) * (k-2) ways 
    => 2 * (k-1) * (k-2) (2 becase for each 2x3 and 3x2 blocks) = x
    => 2 * x (because each block has 2 attacking ways possible) = y
    => ans =  a - y

*/

int main()
{
    ll k; cin >> k;
    for(ll i = 1;i<=k;i++)
    {    
    ll square = i*i;
    ll total =  (square * (square-1) )/2;
    ll possible_places =  4 * (i-1) * (i-2);
    cout << total - possible_places << "\n";
    }
}