#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int n,x;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }


    reverse(v.begin(), v.end());


    for (auto s : v)
    {
        cout << s << " ";
        
    }
    
    
    return 0;
}