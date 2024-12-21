#include<bits/stdc++.h>
using namespace std;

/*
    extremely round = er
    1->9 = 9 er
    10->99 = 9 er
    100->999 = 9 er
    .
    .
    .
    eg. 10 : while loop will not execute even once, count += 10/1 = 10
    eg. 15 : while loop will execute 1 time, count = 9, count += 15/10 = 1 => count = 10
*/
int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin >> n;
        int count = 0;
        int m = 1;
        while(m*10 < n)
        {
            count += 9;
            m *= 10;
        }
        count += n/m;
        cout << count << "\n";
    }
}