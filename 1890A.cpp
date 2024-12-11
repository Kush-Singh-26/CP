#include<bits/stdc++.h>
using namespace std;

// There are 3 cases to be considered:
// 1) All numbers are equal => Valid
// 2) There are only 2 distinct elements
//    eg. 2  3  2  3  2  3  4  2  3 (here there are 3 distict element)
//          5  5  5  5  5  7  6  5
// 3) let a and b be 2 distinct no. ! (abs(count(a) - count(b)) >= 2 )

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> nums(n);
        map<int,int> mp;
        for(int i =0;i<n;i++)
            cin >> nums[i];
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        if(mp.size() == 1)
        {
            cout << "Yes\n";
            continue;
        }
        if(mp.size() > 2)
        {
            cout << "No\n";
            continue;
        }
        auto x = mp.begin();
        int counta = x->second;
        x++;
        int countb = x->second;
        if(abs(counta - countb) >=2) 
            cout << "No\n";
        else
            cout << "Yes\n";      
    }

    return 0;
}