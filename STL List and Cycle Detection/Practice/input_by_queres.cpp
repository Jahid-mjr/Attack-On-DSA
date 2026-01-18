#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l;
    int n,i,x;
    cin >> n;

    while (n--)
    {
        cin >> i >> x;

        if (i <= l.size())
        {
           l.insert(next(l.begin(),i),x);
        }
        else
        {
            cout << "Invalid" << endl;
            continue;
        }


    for (int x : l) {
        cout << x << " ";
    }
    cout << endl;
    for (auto it = l.rbegin(); it != l.rend(); it++) {
    cout << *it << " ";
    }
    cout << endl;

        
        

    }
    
    return 0;
}