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
    MyStack st, st2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    int f = 0;

    if (st.size() != st2.size())
    {
        f = 1;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != st2.top())
            {
                f = 1;
                break;
            }

            st.pop();
            st2.pop();
            
        }
        
    }
    

    if (f == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

    


    return 0;
}