#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* next;


    Node(int val){

        this->val = val;
        this->next = NULL;

    }

};

void insert_at_tail(Node* &head, Node* &tail, int val){


    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    tail = tail->next;



}

void print_linked_list(Node* head){


    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }



}

void check_dup(Node* head, int val, int* f){


    Node* temp = head;
    while (temp != NULL)
    {
        if (val == temp->val)
        {
           *f = 1;
        }
        temp = temp->next;

    }



}


int main()
{
    int x, f = 0;
   

    Node* head = NULL;
    Node* tail = NULL;


    while (cin >> x)
    {

        check_dup(head, x, &f);
        insert_at_tail(head, tail, x);

    }
    


    if (f == 1)
    {
        cout << "YES";
    }
    else
    {
       cout << "NO";
    }
    


    return 0;
}
