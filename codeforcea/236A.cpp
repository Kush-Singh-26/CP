#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >>str;
    int count = 0;
    sort(str.begin(),str.end());
    int n = str.size();
    for(int i = 1; i < n; i++)
    {
        if(str[i] != str[i-1])
            count++;
    }
    
    if(count&1 == 1) 
        cout << "CHAT WITH HER!";
    else
        cout <<  "IGNORE HIM!";
}
