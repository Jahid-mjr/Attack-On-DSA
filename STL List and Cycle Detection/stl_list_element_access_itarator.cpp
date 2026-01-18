#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10,20,30,40,50,60,70};

    cout << l.back()<< endl;
    cout << l.front() << endl;
    cout << *next(l.begin(), 2) << endl;


    cout << *l.begin() << endl;

    // aita hobe na, karon aikhane end nai end er porer gor ase
    // cout << *l.end() << endl; 
    
    return 0;
}