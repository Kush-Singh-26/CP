#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k,x; cin >> n >> k >> x;
        if(x == 1)
        {
            if(k == 1)
                cout << "NO\n";
            else if(n%2 && k == 2)
                cout << "NO\n";
            else if(n%2 == 0)
            {
                cout << "Yes\n" << n/2 << "\n";
                for( int i = 1;i<=n/2;i++)
                    cout << 2 << " ";
                cout <<"\n";
            }
            else if(n%2)
            {
                cout << "YES\n" << 1 + (n-3)/2 << "\n";
                cout << 3 << ' ';
                for(int i =1; i<= (n-3)/2 ; i++)
                    cout << 2 << " ";
                cout << "\n";

            }
            else 
                cout << "NO\n"; 
        }
        else 
        {
            cout << "YES\n" << n << "\n";
            for( int i = 1;i<=n;i++)
                    cout << 1 << " ";
                cout <<"\n";
        }
    }
}