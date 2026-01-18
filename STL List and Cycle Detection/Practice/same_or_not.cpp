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
    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }

        l2.push_back(x);
        
        

    }

    if (l == l2)
    {
        cout << "YES";
    }
    else{

        cout << "NO";
    }
    

    
    
    
    return 0;
}