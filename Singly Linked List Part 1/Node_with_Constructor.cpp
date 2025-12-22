#include <bits/stdc++.h>

class Node{

    public:
    int val;
    Node* next;


    Node(int val){

        this->val = val;
        this->next = NULL;

    }

};

using namespace std;
int main()
{
    Node a(10),b(20),c(300);


    a.next = &b;
    b.next = &c;


   cout << a.val << endl;
   cout << a.next->val << endl;
   cout << a.next->next->val << endl;
    
    return 0;
}