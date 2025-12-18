#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <=sqrt(n); i++)
    {

    if(n%i==0)
    cout << i << " " <<  n/i << " ";


    }

    return 0;
}