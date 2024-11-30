#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int score;
    vector<int> scores(n);
    for(int i =0;i<n;i++)
    {
        cin >> scores[i];
    }
    int minscore = scores[k-1];
    int ans = 0;
    for(int i =0 ;i<n;i++)
    {
        if(scores[i] >= minscore && scores[i] > 0)
            ans++;
    }

    cout << ans;
    return 0;
}