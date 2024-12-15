#include<bits/stdc++.h>
using namespace std;

/*
    First find the max. difference between 2 consecutive numbers. According to the operations:
    one operation decreases the differnece by 2. eg. : 
    2 3 6 7 => diff = 3
      x y
    2 4 5 6 => diff = 1
    2 5 4 5 => diff = -1
    => 2 operations to unsort the array
    => max = diff = 3
       3/2 = 1
       1+1 = 2 operations => to make x > y max_diff/2 + 1 operation are required
*/

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin >>n;
        vector<int> a(n);
        for(int i =0;i<n;i++)
            cin >> a[i];
        int min_diff = INT_MAX;
        int flag = 0;
        for(int i =1;i<n;i++)
        {
            min_diff = min(min_diff,a[i] - a[i-1]);
            if(a[i] < a[i-1])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << 0 << "\n";
        else
        {
            cout << min_diff/2 + 1 << "\n";
        }
    }
}