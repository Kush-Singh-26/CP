#include <bits/stdc++.h>
using namespace std;

// if a sequence if ... is found then, operation 2 can be performed using middle empty space
// to fill all the remaing empty spaces. Otherwise fill all the individual spaces manually 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string line;
        cin >> line;
        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (line.substr(i, 3) == "...")
            {
                cout << 2 << "\n";
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            int ans = 0;
            for (char x : line)
            {
                if (x == '.')
                    ans++;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}