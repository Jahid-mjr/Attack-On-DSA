#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10,20,30,10,50,10};

    // remove ; jekhane jekhane 10 pabe delete korbe
    //l.remove(10);

    // sort
    //l.sort();
    //l.sort(greater<int>());


    // duplicate delete
    // tobe sort thakte hobe
    //l.unique();


    // reverse
    l.reverse();

    for (auto i : l)
    {
        cout << i << endl;
    }
    


    return 0;
}