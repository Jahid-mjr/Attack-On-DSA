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

int size_d(Node* head){

    int s = 0;
    Node* temp = head;
    while (temp != NULL)
    {
       s++;
       temp = temp->next;
    }
    
    return s;



}
void insert_at_head(Node* &head, Node* &tail, int val){


    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    newnode->next = head;
    head->prev = newnode;
    head = newnode;


}
void insert_at_any_position(Node*& head, Node*& tail, int pos, int val) {
    if (pos == 0) {
        insert_at_head(head, tail, val);
        return;
    }

    int sz = size_d(head);
    if (pos == sz) {
        insert_at_tail(head, tail, val);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }

    Node* newnode = new Node(val);
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}




int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int x, val, n;

    cin >> n;

        while (n--) {
        int x, val;
        cin >> x >> val;

        if (x > size_d(head)) {
            cout << "Invalid\n";
            continue;
        }

        insert_at_any_position(head, tail, x, val);
        print_forward(head);
        print_backward(tail);
    }
    
    

    

    
    return 0;
}