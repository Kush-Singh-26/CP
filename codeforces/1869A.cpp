#include<bits/stdc++.h>
using namespace std;

/*
    x^x^x^...^x = 
        0, if even no of x
        x, if odd no of x
    x^0 = x
    if even no of numbers are given : 
    eg. 1 2 3 4 => 1^2^3^4 = x
                   x^x^x^x
                   0 0 0 0
                => 2 steps
    if odd no of number are give :
    eg 1 2 3 4 5 => 1^2^3^4^5 = x
                    x x^x^x^x
                    x^0 0 0 0
                    x^x 0 0 0
                    0 0 0 0 0
                => 4 steps
*/

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int i= 0;i<n;i++)
            cin >>a[i];
        if(n%2 == 0)
        {
            cout << 2 <<"\n";
            cout << 1 << " " << n<<"\n";
            cout << 1 << " " << n<<"\n";
        }
        else
        {
            cout << 4 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 2 << " " << n << "\n";
            cout << 1 << " " << 2 << "\n";
            cout << 1 << " " << 2 << "\n";
        }
    }
}