//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }



    for (auto x : b)
    {
        cout << x << " ";
    }
    for (auto x : a)
    {
        cout << x << " ";
    }
    
    
    

    return 0;
}