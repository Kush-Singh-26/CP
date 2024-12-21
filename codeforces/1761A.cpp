#include<bits/stdc++.h>
using namespace std;
/*
    there must be 2 diff. permutations p and q
    If a = b = n : then common prefix and common postfix and be the whole lenght of the array, i.e.,
    any combination is possible

    eg. n = 5 , a = 2 , b = 2
    p =  1 2 4 3 5
         ___   ___ 
          a     b   here a+b = 4 and only one place is left. It is not possible to generate 2 differnt combinations.
         ___   ___
    q =  1 2 4 3 5
    here a+b+1 = 5 = n (not <n) and 2 diff combinations can't be created
    => n-(a+b) > 1 so that at leat 2 diff combinations can be made
    => a + b + 1 < n will be valid condition. Ant other combination is not possible.
*/
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,a,b; cin >> n >> a >> b;
        if(a == n && b == n) cout << "YES\n";
        else if(a + b + 1 < n) cout << "YES\n";
        else cout << "NO\n";
        
    }
}