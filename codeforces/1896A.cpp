#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> nums(n);
        for(int i =0 ;i<n;i++)
            cin >> nums[i];
        if(nums[0] != 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}