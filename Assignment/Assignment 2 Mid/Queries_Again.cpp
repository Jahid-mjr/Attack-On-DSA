#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, Node* tail, int val){


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

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int sizeOf(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_any_pos(Node *&head, Node *&tail, int ind, int val)
{
    Node *newNode = new Node(val);

    if (ind == 0)
    {
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else
    {
        Node *temp = head;
        
        for (int i = 1; i < ind; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            delete newNode;
            cout << "Invalid" << endl;
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL)
        {
            temp->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        temp->next = newNode;
    }

    print_forward(head);
    print_reverse(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int size = sizeOf(head);

        if (x < 0 || x > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_pos(head, tail, x, v);
        }
    }

    return 0;
}