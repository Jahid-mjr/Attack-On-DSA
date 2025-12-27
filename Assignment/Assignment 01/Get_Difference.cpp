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



int max_self(Node* head){

    Node* temp = head;
    int max = temp->val;
    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        
        temp = temp->next;
    }
    
    return max;




}

int min_self(Node* head){

    Node* temp = head;
    int min = temp->val;
    while (temp != NULL)
    {
        if (temp->val < min)
        {
            min = temp->val;
        }
        
        temp = temp->next;
    }
    
    return min;




}

int main()
{
    
    Node* head = NULL;
    Node* tail = NULL;


    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
           break;
        }
        
        insert_at_tail(head, tail, val);

    }
    
    cout << max_self(head) - min_self(head) << endl;
    
    

    

    return 0;
} 