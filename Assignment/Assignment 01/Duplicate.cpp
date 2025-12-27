#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,x, f = 0;
    cin >> n;
    vector<int>v;   // size diya push back kora jay na......... taile size double hoy

    for (int i = 0; i < n; i++)
    {

        cin >> x;

        auto it  = find(v.begin(), v.end(),x);
        if (it != v.end())
        {
            f = 1;
        }
        v.push_back(x);
        
        

    }
    

    if (f)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    


    return 0;
}