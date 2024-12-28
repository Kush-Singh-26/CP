#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
         1   2  3  4
       1 1   2  9 10
       2 4   3  8 11
       3 5   6  7 12
       4 16 15 14 13

       (x,y) will be inside square of max(x,y)
       (x,y) is on horizontal axis when x<=y
       (x,y) is on vertical axis when x>y
       for even rows number are in decreasing order in anticlockwise order
       for odd rows no. are in inc. order in anticlocwise order
*/

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll x,y; cin >> y >> x;
        ll maxval = max(x,y);
        ll square = (maxval-1) * (maxval-1);
        if(maxval%2 == 0)
        {
            if(x>y)
                cout << square + y << "\n";
            
            else
                cout << (maxval) * (maxval) - x +1 << "\n";
        }
        else
        {
            if(x>y)
                cout << (maxval) * (maxval) - y + 1 << "\n";
            else
                cout << square + x << "\n";
        }

    }
}