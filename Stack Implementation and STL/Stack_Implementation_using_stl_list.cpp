#include <bits/stdc++.h>
using namespace std;


class MyStack{

    public:
        list<int>l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_back();
        }

        int top(){

            return l.back();
        }

        int size(){

            return l.size();
        }
        bool empty(){


            return l.empty();


        }



};

int main()
{
    MyStack st;

    // st.push(12);
    // st.push(45);
    // st.push(89);
    

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;

    // // pop o top er age empty ase kina check korte hobe

    // if(!st.empty())
    //     st.pop();
    
    // if (!st.empty())
    // {
    //     st.top();
    // }




    //input

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    

    //output

    //ulta print hobe :: LIFO
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    

    


    return 0;
}