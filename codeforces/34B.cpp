#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >>n >> m;
    vector<int> costs(n);
    for(int i =0;i<n;i++)
        cin >> costs[i];
    int sum = 0;
    int maxsum = 0;
    sort(costs.begin(),costs.end());
    for(int i =0;i<m;i++)
        costs[i] *= -1;

    for(int i =0;i<m;i++)
    {
        sum += costs[i];
        maxsum = max(maxsum,sum);
    }

    cout << maxsum;
}