#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n,m,k; cin >> n >> m >> k;
        vector<int> a(m), q(k);
        for(int i =0 ;i<m;i++)
            cin >> a[i];
        for(int i =0;i<k;i++)
            cin >> q[i];

        if(n-k >1)
        {
            for(int i = 0;i<m;i++)
                cout << 0;
            cout << "\n";
        }
        else if(k == n)
        {
            for(int i = 0;i<m;i++)
                cout << 1;
            cout << "\n";
        }
        else
        {
            for(int x : a)
            {
                if(binary_search(q.begin(),q.end(),x))
                    cout << 0 ;
                else
                    cout << 1;
            }

            cout << "\n";
        }
    }
}