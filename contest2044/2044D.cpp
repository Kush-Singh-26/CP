#include <bits/stdc++.h>
using namespace std;
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
        vector<int> b(n);
        set<int> st1;
        for (int i = 1; i <= n; i++)
            st1.insert(i);
        // Set will contain all the numbers which are available for use
        for (int i = 0; i < n; i++)
        {
            // if the condition is true that means a[i] is not used till now
            if (st1.count(a[i]))
            {
                b[i] = a[i];
                st1.erase(a[i]);
            }
            else
            {
                b[i] = *st1.begin();
                st1.erase(st1.begin());
            }
        }
        for (auto x : b)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
