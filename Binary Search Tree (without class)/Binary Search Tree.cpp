#include <iostream>
using namespace  std;

// Structure for Binary Search Tree
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Inserting Nodes into the Tree by comparing the value with the source and root nodes.
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
    else if (root->data == value)
    {
        cout << "Duplicates not allowed!" << endl;
    }
    return root;
}

// Function to print the Inorder Traversal of the Binary Search Tree
Node *Inorder(Node *root)
{
    if (!(root))
    {
        return 0;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main()
{
    
    bool run = true;
    int value_user;
    cout << "Enter the value to be entered into the BST : " << endl;
    cin >> value_user;
    return 0;
}