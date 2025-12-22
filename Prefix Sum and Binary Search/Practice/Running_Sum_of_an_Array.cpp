#include <bits/stdc++.h>
using namespace std;

vector <int> runningSum(vector <int> v, int n){
    vector<int> x(n);
    
    x[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        x[i] = x[i-1] + v[i];
    }
    

    return x;


}

int main()
{
    int n;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        v.push_back(s);
    }
    
    vector<int> r;
    r = runningSum(v,n);

    
    for (auto x : r)
    {
        cout << x << " ";
    }
    

    return 0;
}