#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x, y = 0;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())
        {
            y++;
        }
        
    }


    cout << y << endl;
    




    return 0;
}