#include<bits/stdc++.h>
using namespace std;
/*
    BRUTE FORCE

    if the parity of two (i, i+1) elements is equal (both are odd or bothe are even) then their product is substituted
    at the place ith element and checked again otherwise next i is checked.
*/
// int main()
// {
//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         vector<unsigned long long int> a(n);
//         for(int i = 0;i<n;i++)
//             cin >> a[i];
//         int count = 0,i=0;
//         if(n == 1) {cout << 0 << "\n"; continue;}
//         while(i<a.size() - 1)
//         {
//             if(a[i]%2 == a[i+1]%2)
//             {
//                 a[i] *= a[i+1];
//                 a.erase(a.begin() + i+1);
//                 count++;
//             }
//             else i++;
//         }
//         cout << count << "\n";
//     }
// }


/*
    OPTIMAL
              count = 0
    eg.       1  1  1  2  2  3
    product:    1               count = 1
                 1  1  2  2  3 
    product:       1            count = 2
                    1  2  2  3
    product:             4      count = 3
                    1  2  4  3
                product of 2 odd no = odd and product of 2 even no = even              
    => ans = no of times 2 different partiy occurs adjacently    
*/
int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i =0;i<n;i++) cin >> a[i];
        int count = 0;
        for(int i = 0;i<n-1;i++)
        {
            count += (a[i]%2 == a[i+1]%2);
        }
        cout << count << "\n";
    }
}