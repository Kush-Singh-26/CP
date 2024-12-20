#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    string str; cin >>str;
    ll n = str.size();
    ll count = 1, max_count = 1;
    for(int i= 1;i<n;i++)
    {
        if(str[i] == str[i-1])
        {
            count +=1;
            
        }
        else
            count = 1;
        max_count  = max(count, max_count);
    }
    cout << max_count;

}