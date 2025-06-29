//#include<iostream>
//using namespace std;
//class node
//{
//public:
//    int data;
//    node* next;
//
//    node(int d)
//    {
//        data = d;
//        next = nullptr;
//    }
//    ~node()
//    {
//        if (this->next != nullptr)
//        {
//            delete next;
//            this->next = nullptr;
//        }
//    }
//};
//
//class linkedlist
//{
//public:
//    node* head = nullptr;
//    void creationoflinkedlist(int value)
//    {
//        node* temp = new node(value);
//        if (head == NULL)
//        {
//            head = temp;
//        }
//        else
//        {
//            node* current = head;
//            while (current->next != nullptr)
//            {
//                current = current->next;
//            }
//            current->next = temp;
//        }
//    }
//  
//    void printlists()
//    {
//        node* temp = head;
//        while (temp != NULL)
//        {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//
//    }
//};
//
//void insertnumber(linkedlist*& list, int value)
//{
//    node* mynode = new node(value);
//
//    if (list->head == nullptr || list->head->data >= value) {
//        mynode->next = list->head;
//        list->head = mynode;
//        return;
//    }
//
//    node* curr = list->head;
//    while (curr->next != nullptr && curr->next->data < value) {
//        curr = curr->next;
//    }
//
//    mynode->next = curr->next;
//    curr->next = mynode;
//}
//
//
//int main()
//{
//    linkedlist *mylist=new linkedlist();
//    mylist->creationoflinkedlist(4);
//    mylist->creationoflinkedlist(6);
//    mylist->creationoflinkedlist(8);
//    cout << "my list before insertion is: " << endl;
//    mylist->printlists();
//    cout << endl;
//    insertnumber(mylist, 3);
//    insertnumber(mylist, 5);
//    insertnumber(mylist, 7);
//
//
//    cout << "my list after insertion is: " << endl;
//    mylist->printlists();
//
//	return 0;
//}