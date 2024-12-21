#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    for(int i =0;i<n; i++)
    {
        int sum = 0;
        for(int j =0;j<3;j++)
        {
            int temp;
            cin >> temp;
            sum += temp ;
        }
        if(sum >=2)
            ans++;

    }
    cout << ans;
}