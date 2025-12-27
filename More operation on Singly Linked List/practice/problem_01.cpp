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


int main()
{
    
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val, c = 0, d = 0;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
           break;
        }
        
        insert_at_tail(head1, tail1, val);
        c++;

    }
    

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
           break;
        }
        
        insert_at_tail(head2, tail2, val);
        d++;

    }


    if (c == d)
    {
       cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
} 