#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        long long count = 0;
        int mina = min(m,a);
        int minb = min(m,b);
        count += mina;
        count += minb;
        m = 2*m - (mina+minb);
        count += min(m,c);
        cout << count << "\n";
    }
}