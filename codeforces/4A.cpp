#include<bits/stdc++.h>
using namespace std;

void watermellon(int n)
{   
    if(n%2 == 0 && n!=2) cout << "YES";
    else cout << "NO";
}

int main()
{
    int n;
    cin >> n;
    watermellon(n);
}
