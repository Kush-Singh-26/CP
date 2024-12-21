#include<bits/stdc++.h>
using namespace std;
/*
    > test cases are large so use long long
    > if n is even the it is possible to represent
    > eg n = 5 , k = 3
      here n is odd. nut n- 3 = 2 is even which can be represent using 2 value coins.
*/
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n,k; cin >> n >> k;
        if(n%2 == 0)
            cout << "YES\n";
        else if ((n-k)%2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}