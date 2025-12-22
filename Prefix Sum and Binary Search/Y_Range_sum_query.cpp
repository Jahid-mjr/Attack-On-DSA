#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    int l, r;
    cin >> n >> t;
    vector <int> v(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    


    // while (t--)
    // {
    //     cin >> l >> r;
    //     int sum = 0;
    //     for (int i = l; i <= r; i++)
    //     {
    //        sum  = sum + v[i];
    //     }
        
    //     cout << sum << endl;

    // }




    vector <long long int> pre(n+1);

    pre[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }


    while (t--)
    {

    cin >> l >> r;
    // pre[r] - pre[l-1]
    // if l = 1 taile only pre[r]


    long long int sum;

    if (l == 1)
    {
        sum = pre[r];
    }
    else
    {
        sum = pre[r] - pre[l-1];
    }
    


    cout << sum << endl;
    }
    



    
    return 0;
}