#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin >>n;
        int count = 0;
        int max_count = 0;
        for(int i =0 ;i<n;i++)
        {
            int temp; cin >> temp;
            if(temp == 1)
                count =0;
            else 
            {
                count++;
                max_count = max(max_count,count);
            }
                
        }
        cout << max_count << "\n";
    }
}