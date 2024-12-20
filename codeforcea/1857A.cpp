#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        int first; cin >> first;
        long long sum = 0;
        for(int i = 1;i<n;i++)
        {
            int temp; cin >>temp;
            sum += temp;
        }
        if(first%2 == sum%2)
            cout <<"Yes\n";
        else
            cout <<"No\n";
    }
    return 0;
}