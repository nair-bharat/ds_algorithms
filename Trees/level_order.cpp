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

void levelorder(struct Node *node) {

    if (node->left == NULL)
    {
        return;
    }

    if (node->right == NULL)
    {
        return;
    }
    
    //cout<<node->data<<endl;
    cout<<node->left->data<<endl;
    cout<<node->right->data<<endl;
    levelorder(node->left);
    levelorder(node->right);

}

int main() {

    struct Node *root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    cout<<root->data<<endl;
    levelorder(root);

    return 0;
}

