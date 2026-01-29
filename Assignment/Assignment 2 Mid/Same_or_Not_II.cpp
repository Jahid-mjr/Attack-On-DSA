#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> s;

    void push(int x)
    {
        s.push_back(x);
    }

    void pop()
    {
        if (!s.empty())
        {
            s.pop_back();
        }
    }

    int top()
    {
        if (!s.empty())
        {
            return s.back();
        }
        return -1;
    }

    int size()
    {
        return s.size();
    }

    bool empty()
    {
        return s.empty();
    }
};

class MyQueue
{
public:
    list<int> q;

    void push(int x)
    {
        q.push_back(x);
    }

    void pop()
    {
        if (!q.empty())
        {
            q.pop_front();
        }
    }

    int front()
    {
        if (!q.empty())
        {
            return q.front();
        }
        return -1;
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{

    int x, y;
    cin >> x >> y;

    
    MyStack s;
    MyQueue q;

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