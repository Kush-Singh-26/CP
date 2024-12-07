#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t; 
    while (t--) {
        int n, m; 
        cin >> n >> m; 

        vector<int> rowCount(n, 0); 
        vector<int> colCount(m, 0); 

        vector<vector<char>> grid(n, vector<char>(m)); 

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> grid[j][k];
                if (grid[j][k] == '#') {
                    rowCount[j]++;
                    colCount[k]++;
                }
            }
        }

        int maxRow = max_element(rowCount.begin(), rowCount.end()) - rowCount.begin();
        int maxCol = max_element(colCount.begin(), colCount.end()) - colCount.begin();
        cout << maxRow+1 << " " << maxCol+1 << "\n";
    }

    return 0;
}
