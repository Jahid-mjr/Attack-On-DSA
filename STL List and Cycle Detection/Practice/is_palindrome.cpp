#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l,l2;

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

    l2 = l;

    l2.reverse();

    if (l2 == l)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

    

    return 0;
}