#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int i = 0;i<t;i++)
    {
        int n ,x;
        cin >> n >> x;
        vector<int> nums(n);
        for(int j = 0;j<n;j++)
            cin >> nums[j];
        int fuel = 0;
        int p = 0;
        for(int k = 0;k<n;k++)
        {
            fuel = max(fuel, abs(nums[k] - p));
            p = nums[k];
        }
        cout << max(fuel, (x - nums[n-1]) * 2) << "\n";
    }
}