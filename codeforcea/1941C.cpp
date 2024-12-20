#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    for(int i =0;i<n;i++)
    {
        int count = 0;
        int m;
        cin >> m;
        string str;
        cin >> str;
        for(int j = 0;j<m;j++)
        {
            if(j+2 < m && str[j] == 'm' && str[j+1] == 'a' && str[j+2] == 'p')
            {
                count++;
                j+=2;
            }

            else if(j+2 < m && str[j] == 'p' && str[j+1] == 'i' && str[j+2] == 'e')
            {
                count++;
                j+=2;
            }
        }
        cout << count << "\n";
    }
}