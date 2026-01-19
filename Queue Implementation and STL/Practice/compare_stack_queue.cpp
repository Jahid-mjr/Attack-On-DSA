#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue <int> q;

    int n,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
        
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
        
    }
    
    int f = 0;

    if (st.size() != q.size())
    {
        f = 1;
    }
    else
    {
        while (!q.empty())
        {
            if (q.front() != st.top())
            {
                f = 1;
                break;
            }
            
            q.pop();
            st.pop();

        }
        
    }


    if (f == 0)
    {
        cout << "YES";

    }
    else{

        cout << "NO";
    }
    
    



    return 0;
}