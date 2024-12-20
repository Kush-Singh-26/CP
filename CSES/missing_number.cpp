#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t; cin >> n;
    t = n-1;
    vector<long long> nums;
    while(t--)
    {
        long long temp; cin >> temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());
    for(long long i = 0;i<n;i++)
    {
        if(nums[i] != i+1)
        {
            cout << i+1;
            break;
        }
    }
}