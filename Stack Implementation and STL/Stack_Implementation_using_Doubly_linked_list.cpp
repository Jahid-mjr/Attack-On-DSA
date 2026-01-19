#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* next;
    Node* prev;


    Node(int val){

        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }

};



class MyStack{

    public:
        
        Node* head = NULL;
        Node* tail = NULL;
        int s = 0;

        void push(int val){
            
            s++;
            Node* newnode = new Node(val);

            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            


            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;

        }

        void pop(){
            s--;
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;

            if (tail == NULL)
            {
                head = NULL;
                return;
            }
            



            tail->next = NULL;
        }

        int top(){

            return tail->val;
        }

        int size(){

            return s;
        }
        bool empty(){


            // if (head == NULL)
            // {
            //     return true;
            // }
            // else{

            //     return false;
            // }
            

            return head == NULL;

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