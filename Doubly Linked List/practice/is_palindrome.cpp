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

void insert_at_tail(Node* &head, Node* &tail, int val){

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

void print_forward(Node* head){


    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    cout << endl;



}

void print_backward(Node* tail){


    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    
    cout << endl;



}

void reverse_d(Node* head, Node* tail){


    for (Node*  i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
       swap(i->val, j->val);
    }
    

    


}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
        insert_at_tail(head2, tail2, val);
        
    }
    

    reverse_d(head2, tail2);

    int f = 0;
    Node* temp = head;
    Node* temp2 = head2;

    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            f = 1;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
        
    }
       
    
    if (f == 0)
    {
       cout << "YES";
    }
    else{

        cout << "NO";
    }
    


    return 0;
}