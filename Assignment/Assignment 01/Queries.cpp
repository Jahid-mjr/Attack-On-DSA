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

void insert_at_head(Node* &head, Node* &tail, int val){

    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;



}



void print_linked_list(Node* head){


    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }


}

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

void delete_at_head(Node* &head){

    Node* delete_node = head;
    head = head->next;
    delete delete_node;



}

void delete_at_tail(Node* head, Node* &tail, int ind){

    Node* temp = head;
    for (int i = 1; i < ind; i++)
    {
        temp = temp->next;
    }

    Node* delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
    tail = temp;

}


void delete_at_any_position(Node* &head, Node* &tail, int ind, int c){

    if (ind == 0)
    {
        delete_at_head(head);
    }
    else if (ind == c-1)
    {
        delete_at_tail(head,tail,c-1);
    }
    else
    {
        Node* temp = head;
        for (int i = 1; i < ind; i++)
        {
            temp = temp->next;
        }

        Node* delete_node = temp->next;
        temp->next = temp->next->next;
        delete delete_node;
    }
    


    

}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;


    int q,x,y,c = 0;
    cin >> q;
    while (q--)
    {
        cin >> x >> y;


        if (x == 0)
        {
            insert_at_head(head,tail,y);
            c++;
        }
        else if (x == 1)
        {
            insert_at_tail(head,tail,y);
            c++;
        }
        else
        {
            if (y  > c-1)
            {
                
            }
            else
            {
                delete_at_any_position(head,tail,y,c);
                c--;
            }
            
            
            
        }
        


        print_linked_list(head);
        cout << "\n";



    }
    


    

    return 0;
}