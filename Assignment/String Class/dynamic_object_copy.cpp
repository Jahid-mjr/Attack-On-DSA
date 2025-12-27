#include <bits/stdc++.h>
using namespace std;

class Player{

    public:
    int jurssy;
    string country;


    Player(int jurssy, string country){

        this->jurssy = jurssy;
        this->country = country;


    }





};


int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    


    Player* doni = new Player(100, "India");
    Player* koholi = new Player(18, "India");

    // koholi = doni;
    // delete doni;
    // amon kore copy korle asole copy hoy na addrs cpy hoy
    // tai main ta delete korle sob delete hoye jay



    // koholi->jurssy = doni->jurssy;
    // koholi->country = doni->country;
    // delete doni;
    // abar tik hobe but onek veriable thakle ???



    *koholi = *doni;
    // aita tik 




    
    cout << koholi->jurssy << endl;
    return 0;
}