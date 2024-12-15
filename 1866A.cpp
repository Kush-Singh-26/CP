#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++)
        cin >> nums[i];
    int minnum = abs(nums[0]);
    for(int x : nums)
    {
        minnum = min(abs(minnum), abs(x));
    }
    cout << minnum << "\n";
    
    return 0;
}