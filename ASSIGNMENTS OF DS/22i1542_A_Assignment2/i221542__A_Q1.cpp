//#include <iostream>
//using namespace std;
//class node {
//public:
//    int data;
//    node* left;
//    node* right;
//    node(int val) 
//    {
//        this->data = val;
//        this->left = nullptr;
//        this->right = nullptr;
//    }
//};
//
//bool search(node*& root, int value) 
//{
//    node* curr = root;
//    while (curr != nullptr) 
//    {
//        if (curr->data == value)
//        {
//            return true;
//        }
//        else if (curr->data > value) 
//        {
//            curr = curr->left;
//        }
//        else 
//        {
//            curr = curr->right;
//        }
//    }
//    return false;
//}
//
//void insert(node*& root, int value)
//{
//    node* curr = root;
//    node* prev = nullptr;
//    while (curr != nullptr)
//    {
//        if (curr->data == value) 
//        {
//            break;
//        }
//        else if (curr->data > value) 
//        {
//            prev = curr;
//            curr = curr->left;
//        }
//        else
//        {
//            prev = curr;
//            curr = curr->right;
//        }
//    }
//    if (prev == nullptr)
//    {
//        root = new node(value);
//    }
//    else if (prev->data > value) 
//    {
//        prev->left = new node(value);
//    }
//    else 
//    {
//        prev->right = new node(value);
//    }
//}
//
//void printwithinrange(node *&root, int k1, int k2)
//{
//    node* curr = root;
//    if (curr == nullptr)
//    {
//        return;
//    }
//
//    
//    if (root->data < k1)
//    {
//        printwithinrange(root->right, k1, k2);
//    }
//   
//    else if (root->data > k2)
//    {
//        printwithinrange(root->left, k1, k2);
//    }
//   
//    else
//    {
//        printwithinrange(root->left, k1, k2);
//        cout << root->data << " ";
//        printwithinrange(root->right, k1, k2);
//    }
//     
//    
//
//
//
//}
//
//int main()
//{
//	node* root = nullptr;
//	    insert(root, 10);
//	    insert(root, 5);
//	    insert(root, 20);
//	    insert(root, 2);
//	    insert(root, 7);
//	    insert(root,13);
//	    insert(root, 25);
//        insert(root, 9);
//        insert(root, 19);
//        int k1 = 0, k2 = 0;
//        cout << "enter k1 and k2 for range" << endl;
//        cin >> k1 >> k2;
//        printwithinrange(root, k1, k2);
//
//
//}