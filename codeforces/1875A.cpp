#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
    adding time when counter reaches 1 will maximise the count.
    a-1 beacuse :
        1) min time will have to be 1
        2) if time left = 1 and a is added, max time limit will be crossed
        => min(a-1, xi) is added
*/

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int a,b,n; cin >> a>>b>>n;
        ll count = b;
        for(int i= 0;i<n;i++)
        {
            int t; cin >> t;
            count += min(a-1, t);
        }     
            
        cout << count << "\n";
        
    }
}