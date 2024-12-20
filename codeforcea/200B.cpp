#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    float total = 0;
    int temp;
    for(int i =1;i<=n;i++)
    {
        cin >> temp;
        total += temp;
    }

    cout << (total/n);
}