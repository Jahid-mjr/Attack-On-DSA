#include <bits/stdc++.h>
using namespace std;

class Student{

    public :
    string name;
    int roll;
    int math;
    int eng;


    Student(string name, int roll, int math, int eng){


        (*this).name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;

    }


    void Totalmarks(){

        cout << "Total marks of " << name << " = " << math+eng << endl;;
    }





};



int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    Student sakib("Sakibul Alom",23,85,56);
    sakib.Totalmarks();

    Student rakib("Rakibul Alom",22,78,89);
    rakib.Totalmarks();





    return 0;
}