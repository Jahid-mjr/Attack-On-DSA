#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int n; // -----O(1)
    cin >> n; // -----O(1)

    for (int i = 0; i < n; i++) // -----O(n)
    {
       cout << i << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i= i +2) //-----O(n)
    {
        cout << i << " ";
    }
    

    

    return 0; // -----O(1)
}



// Mot     -----O(n)