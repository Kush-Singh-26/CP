#include<bits/stdc++.h>
using namespace std;
/*
    the numbers are given in sorted order.
    So if the largest element ,i.e., the last element to first position, then the array will not be ugly.
    It can be ugly only if the second element (originally the first element) = the largest element(i.e., the current first element)
*/
int main()
{
    int t;cin >>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i<n;i++)
            cin >> a[i]; 
        int flag = 0;
        if(a[0] == a[n-1])
        {
            cout << "NO\n";
            flag = 1;
        }
        if(!flag)
        {
            cout << "YES\n" << a[n-1] << " ";
            for(int i = 0;i<n-1;i++) cout << a[i] << " ";
            cout << "\n";
        }

    }
}