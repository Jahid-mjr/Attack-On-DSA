#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    int n,x;
    cin >> n;
    vector <int> v;


    auto isPo = [](int g) { return g > 0;};
    auto isNe = [](int f) { return f < 0;};


    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    replace_if(v.begin(), v.end(), isPo, 1);
    replace_if(v.begin(), v.end(), isNe, 2);



    for( auto s : v){

        cout << s << " ";
    }

    return 0;
}