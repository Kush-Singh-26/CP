#include<bits/stdc++.h>
using namespace std;

// main point is that it is mentioned that a subarray of lenght *at most k* is mentioned.
// so if the array is sorted already ans = YES
// otherwise if k >= 2 the the array can be sorted by swapping adjacen elements 
// if k = 0 or 1 then it will be subarray of lenght 0 or 1. SO no swapping can be done.
int main()
{
    int t; cin >> t;
    for(int i= 0;i<t;i++)
    {
        int n,k;
        cin >> n >> k;
        vector<int> nums(n);
        for(int j = 0;j<n;j++)
            cin >> nums[j];
        bool isorted = true;
        for(int m= 1;m<n;m++)
            if(nums[m-1] > nums[m])
                isorted = false;
        if(isorted)
        {
            cout << "YES\n";
            continue;
        }

        if(k >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}