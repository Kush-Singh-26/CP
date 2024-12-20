#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int a,b,c,d; cin >> a >> b >> c >>d;
        if(b > d) cout << -1 << "\n";
        else if((d-b) < (c-a)) cout << -1 << "\n";
        else
            cout << (d-b)*2 + (a-c) << "\n";
    }
}