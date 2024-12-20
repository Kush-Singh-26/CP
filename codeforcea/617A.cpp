#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<=5)
    {
        cout << 1 << "\n";
        return 0;
    }
    int count = 0;
    count = n/5;
    if(n%5 != 0)
        count += 1;

    cout << count << "\n";
    return 0;
}