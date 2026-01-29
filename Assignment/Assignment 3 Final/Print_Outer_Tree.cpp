#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* left;
    Node* right;


    Node(int val){

        this->val = val;
        this->left = NULL;
        this->right = NULL;

    }

};

Node* input_tree(){

    int val;
    cin >> val;
    Node* root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    
    
    
    queue <Node*> q;

    if (root != NULL)
    {
        q.push(root);
    }
    

    

    while (!q.empty())
    {
        // 1. ber kore ana
        Node* p = q.front();
        q.pop();



        // 2. oi node ke niya kaj
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }


        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        

        p->left = myLeft;
        p->right = myRight;


        // 3. children push kora

        if (p->left)
        {
            q.push(p->left);
        
        }
        if (p->right)
        {
            q.push(p->right);
        }
        
        

    }
    


    return root;


}


void left_print(Node* root){

    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL)
    {
        left_print(root->right);
    }
    else
    {
        left_print(root->left);
    }
    
    
    cout << root->val << " ";
    


}

void right_print(Node* root){

    if (root == NULL)
    {
        return;
    }
    
    cout << root->val << " ";

    if (root->right == NULL)
    {
        right_print(root->left);
    }
    else
    {
        right_print(root->right);
    }
    


    
    


}




int main()
{
    
  

    Node* root = input_tree();
    left_print(root->left);
    cout << root->val << " ";
    right_print(root->right);


    

    
    
    return 0;
}