#include <bits/stdc++.h>
using namespace std;


class MyStack{

    public:
        vector<int>v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){

            return v.back();
        }

        int size(){

            return v.size();
        }
        bool empty(){


            return v.empty();


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