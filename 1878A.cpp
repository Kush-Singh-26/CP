#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        int flag = 1;
        vector<int> nums(n);
        for(int i =0 ;i<n;i++)
            cin >> nums[i];
        for(int i =0;i<n;i++)
            if(nums[i] == k)
            {
                cout << "YES\n";
                flag = 0;
                break;
            }
        if(flag)
            cout << "NO\n";
    }
}