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


void print_reverse(Node* head){

    Node* temp = head;
    
    if (temp == NULL)
    {
        return;
    }
    
    print_reverse(temp->next);
    cout << temp->val << " ";



}



int main()
{
    
    Node* head1 = NULL;
    Node* tail1 = NULL;


    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
           break;
        }
        
        insert_at_tail(head1, tail1, val);

    }
    
    print_reverse(head1);

    

    

    return 0;
} 
