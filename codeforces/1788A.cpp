#include<bits/stdc++.h>
using namespace std;
/*
    First total number of 2s is found. Because only 1 and 2 are present in the array,
    => product will only result from 2.
    If number of 2s on both side if i are equal then product will also be equal. 
*/
int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);  
        int total = 0;
        for(int i = 0;i<n;i++)
        {
            cin >> a[i];
            if(a[i] == 2) total ++;
        }
        int sum = 0, flag = 0;
        for(int i= 0;i<n;i++)
        {
            if(a[i] == 2)sum += 1;
            if(sum == total - sum)
            {
                cout << i+1 << "\n";
                flag = 1;
                break;
            }
        }
        if(!flag) cout << -1 << "\n";        
    }
}