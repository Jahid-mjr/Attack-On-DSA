#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    
    string s;
    getline(cin,s);

    stringstream ss(s);
    string w;

    ss >> w;
    reverse(w.begin(),w.end());
    cout << w;


    while (ss >> w)
    {
        reverse(w.begin(),w.end());
        cout << " " << w;
    }
    



    return 0;
}