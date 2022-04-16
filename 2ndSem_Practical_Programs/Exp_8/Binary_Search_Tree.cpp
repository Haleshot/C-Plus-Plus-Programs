#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

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