//
//#include<iostream>
//using namespace std;
//
//class Node
//{
//public:
//    int data;
//    Node* next;
//
//    Node(int data)
//    {
//        this->data = data;
//        this->next = nullptr;
//    }
//};
//
//class queue
//{
//private:
//    Node* front;
//    Node* rear;
//
//public:
//    queue()
//    {
//        front = nullptr;
//        rear = nullptr;
//    }
//
//    bool isEmpty()
//    {
//        return front == nullptr;
//    }
//
//    void enqueue(int x)
//    {
//        Node* newNode = new Node(x);
//        if (isEmpty())
//        {
//            front = rear = newNode;
//        }
//        else
//        {
//            rear->next = newNode;
//            rear = newNode;
//        }
//    }
//
//    void dequeue()
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        Node* temp = front;
//        front = front->next;
//        delete temp;
//        if (front == nullptr)
//        {
//            rear = nullptr;
//        }
//    }
//
//    int getmiddle()
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty" << endl;
//            return -1;
//        }
//        Node* slow = front;
//        Node* fast = front;
//        while (fast != nullptr && fast->next != nullptr) {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow->data;
//    }
//
//
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        Node* temp = front;
//        cout << "Queue elements: ";
//        while (temp != nullptr) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    queue q;
//
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//
//    q.display();
//    cout << "the middle element is: " << q.getmiddle() << endl;
//    q.dequeue();
//
//    q.display();
//
//    return 0;
//}
