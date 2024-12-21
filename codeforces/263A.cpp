#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    int matrix[5][5];    
    for(int i =0;i<5;i++)
        for(int j =0;j<5;j++)
        {
            int temp;
            cin >> temp;
            matrix[i][j] = temp;
            if(temp == 1)
            {
                x = i;
                y = j;
            }
        }
    int x_move = 2-x;
    if(x_move < 0) x_move *= -1;
    int y_move = 2-y;
    if(y_move < 0) y_move *= -1;
    cout << x_move + y_move << "\n";
}