#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    transform(str1.begin(),str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(),str2.end(), str2.begin(), ::tolower);

    int ans = (str1 <str2) ? -1 : (str1>str2) ? 1 : 0;


    cout << ans;
}