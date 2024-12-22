#include<bits/stdc++.h>
using namespace std;

/*
    For a string to be palindrome the number of char. with odd occurences <= 1. 
    push the char. into a map and find the number of char. with odd occurences.
    aim is to bring the no of occurences <= 1. So subtracting the count - k <= 1. 
*/

int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        string s; cin >> s;
        map<char,int> mp;
        for(int i =0;i<n;i++)
            mp[s[i]]++;
        int count = 0;
        for(auto x : mp)
        {
            if(x.second % 2) count++;
        }
        if(count - k <= 1) cout << "YES\n";
        else cout << "NO\n";
    }
}