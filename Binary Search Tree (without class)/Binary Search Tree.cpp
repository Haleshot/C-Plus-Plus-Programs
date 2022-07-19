#include <iostream>
using namespace  std;

// Structure for Binary Search Tree
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *Insert_BST(struct Node *root, int value)
{
    if(root == NULL)
    {
        Node *newnode = new Node;
        newnode->data = value;
        newnode->left = NULL;
        newnode->right = NULL;
        root = newnode;
    }
    else if (root->data > value)
    {
        root->left = Insert_BST(root->left, value);
    }
    else if (root->data < value)
    {
        root->right = Insert_BST(root->right, value);
    }
}

int main()
{

    return 0;
}