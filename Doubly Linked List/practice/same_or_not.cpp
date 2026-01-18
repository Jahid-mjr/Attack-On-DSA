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


int size_out(Node* head){

    Node* temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    
    return c;


}

bool isSame(Node* head1, Node* head2){

    if (size_out(head1) != size_out(head2))
    {
        return false;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }
        
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    return true;



}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
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
        insert_at_tail(head1, tail1, val);
        
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
        
    }

    if (isSame(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

  
    return 0;
}