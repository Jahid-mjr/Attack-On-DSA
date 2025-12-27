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

void print_ith_index(Node* head, int ind){

    Node* temp = head;

    for (int i = 1; i < ind ; i++)
    {
        temp = temp->next;
    }
    
    cout << temp->val;


}

bool is_sorted(Node* head){

    Node* temp = head;
    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            return false;
        }
        
        temp = temp->next;
    }
    
    return true;


}


int main()
{
    int x, y = 0;
   

    Node* head = NULL;
    Node* tail = NULL;


    while (cin >> x)
    {
        insert_at_tail(head, tail, x);
        y++;
    }
    


    //print_linked_list(head);




    if (is_sorted(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    


    

    return 0;
}
