//#include<iostream>
//using namespace std;
//
//class node
//{
//public:
//    int data;
//    node* next;
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
//void concatenate(linkedlist*& list1, linkedlist*& list2)
//{
//    if (list1 == nullptr)
//    {
//        list1 = list2;
//        list2 = nullptr;
//        return;
//    }
//    else if (list2 == nullptr)
//    {
//        return;
//    }
//    else
//    {
//        node* curr = list1->head;
//        while (curr->next != NULL)
//        {
//            curr = curr->next;
//        }
//        curr->next = list2->head;
//        list2->head = nullptr;
//
//    }
//
//}
//
//int main()
//{
//    linkedlist* list1 = new linkedlist();
//    list1->creationoflinkedlist(20);
//    list1->creationoflinkedlist(30);
//    list1->creationoflinkedlist(40);
//
//    linkedlist* list2 = new linkedlist();
//    list2->creationoflinkedlist(50);
//    list2->creationoflinkedlist(60);
//
//    cout << "my list 1 is: " << endl;
//    list1->printlists();
//    cout << endl;
//    cout << "my list 2 is: " << endl;
//    list2->printlists();
//    cout << endl;
//
//    concatenate(list1, list2);
//    cout << "list after concatenation: " << endl;
//    list1->printlists();
//
//    
//    delete list1;
//    delete list2;
//
//    return 0;
//}
