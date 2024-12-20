#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int l = 0, m = 0, h = n - 1;

    while (m <= h)
    {

        while (l < n && str[l] == '+') l++;
        while (m < n && str[m] == '+') m++;
        while (h >= 0 && str[h] == '+') h--;

        if (m > h) break;
        if (str[m] == '1')
        {
            swap(str[l], str[m]);
            l++;
            m++;
        }
        else if (str[m] == '3')
        {
            swap(str[h], str[m]);
            h--;
        }
        else
        {
            m++;
        }
    }

    cout << str;
    return 0;
}
