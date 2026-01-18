#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l;

    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }

        l.push_back(x);
        
        

    }

    l.sort();

    for (auto i : l)
    {
        cout << i << " ";
    }
    

    return 0;
}