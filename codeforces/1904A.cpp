#include<bits/stdc++.h>
using namespace std;
/*
    From each king and the queen, there are 8 possible places where the knight can be situated.
    Out of the 16 possible places, the total no. of common coordinates is the answer. 
*/

int main()
{
    int t; cin >> t;
    // 
    while(t--)
    {
        int a,b; cin >> a >> b;
        int xk,yk; cin >> xk >> yk;
        int xq,yq; cin >> xq >> yq;

        set<pair<int,int>> k,q;
        // 8 combinations for king
        k.insert({xk+a, yk+b});
        k.insert({xk+a, yk-b});
        k.insert({xk+b, yk+a});
        k.insert({xk+b, yk-a});
        k.insert({xk-a, yk+b});
        k.insert({xk-a, yk-b});
        k.insert({xk-b, yk+a});
        k.insert({xk-b, yk-a});

        // 8 combinations for queen
        q.insert({xq+a, yq+b});
        q.insert({xq+a, yq-b});
        q.insert({xq+b, yq+a});
        q.insert({xq+b, yq-a});
        q.insert({xq-a, yq+b});
        q.insert({xq-a, yq-b});
        q.insert({xq-b, yq+a});
        q.insert({xq-b, yq-a});

        int count = 0;
        for(auto x : k)
        {
            if(q.find(x) != q.end())
                count++;
        }
        cout << count << "\n";
    }
}