#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {

        data = val;
        left = right = NULL;
    }

};

void preorder(struct Node *node) {

    if (node == NULL)
    {
        return;
    }

    cout<<node->data<<"->";
    preorder(node -> left);
    preorder(node -> right);
    
}

void postorder(struct Node *node) {

    if (node == NULL)
    {
        return;
    }

    postorder(node -> left);
    postorder(node -> right);
    cout<<node->data<<"->";
}

void inorder(struct Node *node) {

    if (node == NULL)
    {
        return;
    }

    inorder(node -> left);
    cout<<node->data<<"->";
    inorder(node -> right);
    
}

int main() {
    
    struct Node *root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> right = new Node(4);

    cout<<"preorder"<<endl;
    preorder(root);

    cout<<"postoder"<<endl;
    postorder(root);

    cout<<"inorder"<<endl;
    inorder(root);

    


    return 0;
}