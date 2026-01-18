#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10,20,30,40,50};
    list <int> l2;

    l2 = l;
    // l2.assign(l.begin(), l.end());

    // for (auto i : l2)
    // {
    //     cout << i << endl;
    // }
    

    // l.push_back(10);
    // l.push_front(23);


    // l.pop_back();
    // l.pop_front();



    // i th index er element print

    //cout << *next(l.begin(),1);


    // i th index e insert
    // l.insert(next(l.begin(),2),233);
    // l.insert(next(l.begin(),2),l2.begin(),l2.end());




    // erase
    //l.erase(next(l.begin(), 2));
    //l.erase(next(l.begin(),1), next(l.begin(),3));

    // replace
    //replace(l.begin(), l.end(), 20, 56);


    //find
    // auto it = find(l.begin(), l.end(),20);
    // if (it == l.end())
    // {
    //     cout << "NOT FOUND";
    // }
    // else{

    //     cout << "FOUND";
    // }
    

    for (auto i : l)
    {
        cout << i << endl;
    }
    



    return 0;
}