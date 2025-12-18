#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)  //------O(n)
    {
        for (int j = 1; j < n; j*=2) //-------O(log N)
        {
            cout << "hello" << endl;
        }
        
    }
    

    return 0;
}
//mot --------O(N * logN)