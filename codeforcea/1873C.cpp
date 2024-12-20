#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<string> grid(10);
        for(int i = 0; i<10;i++)
            for(int j =0;j<10;j++)
                cin >> grid[i][j];
        int total = 0;
        for(int row = 0 ; row<10;row++)
        {
            for(int col = 0;col<10;col++)
            {
                if(grid[row][col] == 'X')
                {
                    int r = (row < 10 - 1 - row) ? row : (10 - 1 - row);
                    int c = (col < 10 - 1 - col) ? col : (10 - 1 - col);
                    int score = 1+ ((r < c) ? r : c);
                    total += score;
                }
            }
        }

        cout << total << "\n";
    }
}