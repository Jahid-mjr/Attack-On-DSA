#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string s;
    while (cin >> s)
    {
        if (s == "end"){
            break;
        }
            
        Node *newNode = new Node(s);

        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int q;
    cin >> q;

    string addr;
    Node *k = NULL;

    while (q--)
    {
        cin >> addr;

        if (addr == "visit")
        {
            string addr;
            cin >> addr;
            Node *temp = head;
            bool found = false;
            while (temp)
            {
                if (temp->val == addr)
                {
                    k = temp;
                    cout << k->val << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (!found)
                cout << "Not Available" << endl;
        }
        else if (addr == "next")
        {
            if (k && k->next)
            {
                k = k->next;
                cout << k->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (addr == "prev")
        {
            if (k && k->prev)
            {
                k = k->prev;
                cout << k->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}