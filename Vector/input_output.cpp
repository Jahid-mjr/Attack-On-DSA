#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector <int> v;

    //vector <int> v(n); // dite sob gula 0 diya ini hoye jay
    // jodi n deya na thake taile amne neya jabe na
    //  for (int i = 0; i < n; i++)
    //  {
    //     cin >> v[i];
    //  }


     for (int i = 0; i < n; i++)
     {
       int x;
       cin >> x;
       v.push_back(x);
     }






    for (int i = 0; i < n; i++)
     {
        cout << v[i] << endl;;
     }



     
     

    return 0;
}