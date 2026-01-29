#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;

    stack<int> s;
    queue<int> q;

    int a;
    while (x--)
    {
        cin >> a;
        s.push(a);
    }

    int b;
    while (y--)
    {
        cin >> b;
        q.push(b);
    }

    bool f = true;
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            f = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (f && s.empty() && q.empty())
    {
        cout << "YES" << endl;

    }     
    else{

        cout << "NO" << endl;
    }
        

    return 0;
}