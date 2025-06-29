#include<iostream>
#include<queue>
using namespace std;

class node 
{
public:
    int data;
    node* left;
    node* right;
    node(int value)
    {
        this->data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert nodes into the binary tree
node* insertnodes(node* root) 
{
    cout << "Enter data (enter -1 to stop): ";
    int data;
    cin >> data; 
    if (data == -1)
    {
        return nullptr;
    }
    root = new node(data);
    cout << "Enter data for inserting in left of " << data << ":" << endl;
    root->left = insertnodes(root->left);
    cout << "Enter data for inserting in right of " << data << ":" << endl;
    root->right = insertnodes(root->right);
    return root;
}

void lovelordertraversla(node* root)
{
    queue < node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if (temp == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }

        }
    }
}
// Function to perform inorder traversal
void inorder(node* root) 
{
    if (root == nullptr) 
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Function to perform preorder traversal
void preorder(node* root)
{
    if (root == nullptr) 
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Function to perform postorder traversal
void postorder(node* root) 
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Function to delete a node from the binary tree
node* deleteNode(node* root, int key) 
{
    if (root == nullptr) 
    {
        return nullptr;
    }
    if (root->data == key) 
    {
        delete root;
        return nullptr;
    }
    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);
    return root;
}

// Function to search for a specific number in the binary tree
bool search(node* root, int key)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == key) 
    {
        return true;
    }
    return search(root->left, key) || search(root->right, key);
}

// Function to display all nodes using level order traversal
void displayNodes(node* root) 
{
    if (root == nullptr) 
    {
        cout << "Tree is empty." << endl;
        return;
    }
    queue<node*> q;
    q.push(root);
    cout << "Nodes in the binary tree:" << endl;
    while (!q.empty())
    {
        node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left != nullptr)
        {
            q.push(current->left);
        }
        if (current->right != nullptr) 
        {
            q.push(current->right);
        }
    }
    cout << endl;
}

int main() 
{
    node* root = NULL;
    root = insertnodes(root);

    cout << "Level order traversal is: ";
    lovelordertraversla(root);
    cout << endl;

    cout << "Inorder traversal is: ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal is: ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal is: ";
    postorder(root);
    cout << endl;

    // Deleting a node
    int key;
    cout << "Enter the value to delete from the tree: ";
    cin >> key;
    root = deleteNode(root, key);
    cout << "After deleting " << key << " from the tree, inorder traversal is: ";
    inorder(root);
    cout << endl;

    // Searching for a specific number
    int searchKey;
    cout << "Enter a number to search in the tree: ";
    cin >> searchKey;
    if (search(root, searchKey)) {
        cout << searchKey << " found in the tree." << endl;
    }
    else {
        cout << searchKey << " not found in the tree." << endl;
    }

    // Displaying all nodes
    displayNodes(root);

    return 0;
}
