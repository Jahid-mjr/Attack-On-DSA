#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int n; // -----O(1)
    cin >> n; // -----O(1)

    for (int i = 1; i < n; i *= 2) // -----O(log N)
    {
       cout << i << endl;
    }

    return 0; // -----O(1)
}
// Mot     -----O(log N)