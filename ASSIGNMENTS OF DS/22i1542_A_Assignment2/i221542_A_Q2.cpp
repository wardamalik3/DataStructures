//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class node {
//public:
//    string data;
//    node* left;
//    node* right;
//    node(string value)
//    {
//        this->data = value;
//        this->left = nullptr;
//        this->right = nullptr;
//    }
//    ~node()
//    {
//        delete left;
//        delete right;
//    }
//};
//
//bool search(node* root, string value)
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
//void insert(node*& root, string value)
//{
//    if (root == nullptr) {
//        root = new node(value);
//    }
//    else if (value < root->data)
//    {
//        insert(root->left, value);
//    }
//    else
//    {
//        insert(root->right, value);
//    }
//}
//
//void displayinorder(node* root)
//{
//    if (root != nullptr)
//    {
//        displayinorder(root->left);
//        cout << root->data << " ";
//        displayinorder(root->right);
//    }
//}
//
//int main()
//{
//    node* root = nullptr;
//    ifstream file("wordlist.txt");
//    if (!file)
//    {
//        cerr << "Error opening file." << endl;
//        return 1;
//    }
//
//    const int maxwords = 10000; 
//    string words[maxwords];
//    int count = 0;
//    while (file >> words[count] && count < maxwords)
//    {
//        count++;
//    }
//    file.close();
//
//    srand(time(nullptr));
//    random_shuffle(words, words + count); 
//
//    for (int i = 0; i < count; ++i)
//    {
//        insert(root, words[i]);
//    }
//
//    cout << "Words inserted into the binary search tree in alphabetical order:" << endl;
//    displayinorder(root);
//    cout << endl;
//
//    string searchword = "example";
//    if (search(root, searchword)) {
//        cout << searchword << " found in the BST." << endl;
//    }
//    else
//    {
//        cout << searchword << " not found in the BST." << endl;
//    }
//
//    delete root;
//
//    return 0;
//}
