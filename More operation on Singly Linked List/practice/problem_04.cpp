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

void insert_at_head(Node* &head, int val){

    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;



}

void insert_at_any_position(Node* &head, int ind, int val){


    if (ind == 0)
    {
        insert_at_head(head,val);
    }
    else{

        Node* newnode = new Node(val);
        Node* temp = head;
        for (int i = 1; i < ind; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    }
    

    

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



int main()
{
    Node* head = NULL;
    Node* tail = NULL;


    int val, c = 0;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
           break;
        }
        
        insert_at_tail(head, tail, val);
        c++;

    }

    int x, y, z;
    cin >> x;
    while (x--)
    {
        cin >> z >> y;
        if (z > c)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_position(head,z,y);
            c++;
            print_linked_list(head);
            cout << "\n";
        }  

        

    }
    

    return 0;
}