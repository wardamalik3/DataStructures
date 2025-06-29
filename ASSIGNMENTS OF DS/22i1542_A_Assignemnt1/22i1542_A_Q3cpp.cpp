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
//    int count=0;
//    void creationoflinkedlist(int value)
//    {
//        node* temp = new node(value);
//        if (head == NULL)
//        {
//            head = temp;
//            count = 1;
//        }
//        else
//        {
//            node* current = head;
//            while (current->next != nullptr)
//            {
//                current = current->next;
//                
//            }
//            current->next = temp;
//            count++;
//        }
//    }
//
//
//    int median() {
//       
//        if (count == 0) 
//        {
//            return 0; 
//        }
//
//        node* slow = head;
//        node* fast = head;
//        node* prev = nullptr;
//
//       
//        while (fast != nullptr && fast->next != nullptr)
//        {
//            prev = slow;
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//
//        if (count % 2 != 0)
//        {
//            return slow->data;
//        }
//        else 
//        { 
//            return (prev->data + slow->data) / 2;
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
//
//
//int main()
//{
//    linkedlist mylist;
//    mylist.creationoflinkedlist(1);
//    mylist.creationoflinkedlist(2);
//    mylist.creationoflinkedlist(2);
//    mylist.creationoflinkedlist(5);
//    mylist.creationoflinkedlist(7);
//    mylist.creationoflinkedlist(9);
//    mylist.creationoflinkedlist(11);
//    cout << "my list is: " << endl;
//    mylist.printlists();
//    cout << endl;
//
//    cout << "Median of the list is: " << mylist.median() << endl;
//
//
//   
//
//   
//  
//  
//
//    return 0;
//}
