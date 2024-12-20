#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int countp1= 0, countn1 = 0;
        int n; cin>>n;
        int temp;
        while(n--)
        {
            cin >> temp;
            if(temp == -1)
                countn1++;
            else
                countp1++;
        }
        int changes = 0;
        if(countn1 > countp1)
        {
            changes += (countn1 - countp1 + 1)/2;
            countn1 -= changes; // changes => number of opertions ,i.e., how many -1 became +1.
        }
        if(countn1 %2 == 1)
            changes++;
        cout << changes << "\n";       
    }
}