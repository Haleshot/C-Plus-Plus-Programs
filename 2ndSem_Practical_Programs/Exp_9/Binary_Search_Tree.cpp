#include <iostream>
using namespace std;


// Structure for Binary Search Tree.
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Inserting Nodes into the Tree by comparing the value with the source and root nodes.
Node *insertBST(Node *root, int value)
{
    if(root == NULL)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        root = newNode;
        
    }
    
    else if(value < root->data)
    {
        root->left = insertBST(root->left, value);
    }

    else if(value > root->data)
    {
        root->right = insertBST(root->right, value);
    }

    else if(value == root->data)
    {
        cout << "Duplicates not allowed!\n";
    }
    return root;
}


// Displaying the Inorder of the Binary Tree.
Node *Inorder(Node *root)
{
    if(!(root))
    {
        return 0;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);

}


// Main Function
int main()
{
    Node *root = NULL;
    bool run = true;

    do
    {
        int ch;
        cout << "Menu\n1.Insert Values into the Tree\n2.Display the Inorder of Tree\n3.Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            int value;
            cout << "Enter the value to be inserted into the tree : ";
            cin >> value;

            root = insertBST(root, value);
            break;
        

        case 2:
            Inorder(root);

        case 3:
            exit(0);
        
        default:
            cout << "Invalid Choice!\n";
            break;
        }
    } while (run == true);
    
    return 0;
}