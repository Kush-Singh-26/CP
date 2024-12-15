#include <bits/stdc++.h>
using namespace std;
/*
    Logic is that if cj is not a divisor of bi then cj will be greater than bi.
    eg. 6: divisors = 1, 2, 3. => Divisors of a number must be less than that number.
    Thus the largest number(s) will be in c andd all the number sless than cwill be in b.
    Then cj will never be a divisor of any element of b.

    If a = [2,2,2] ,i.e, all elements are equal then there after sorting a[0] and a[n-1] will be equal.
    In this case, it is not possible to divide the a into 2 arrays, because cj will always be a divisor of bi. 
*/
int main()
{
    int t; 
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n; 
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());
        
        int maxele = a[n - 1];
        
        if (a[0] == a[n - 1])
        {
            cout << -1 << "\n";
            continue;
        }
        
        vector<int> b; 
        vector<int> c; 
        
        int j = 0;
        for (j = 0; j < n && a[j] != maxele; j++)
            b.push_back(a[j]);
        while (j < n)
        {
            c.push_back(a[j]);
            j++;
        }
        
        cout << b.size() << " " << c.size() << "\n";
        
        for (int x : b) 
            cout << x << " ";
        cout << "\n";
        
        for (int x : c) 
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
