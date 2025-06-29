//#include<iostream>
//using namespace std;
//
//class Node
//{
//public:
//    int id;
//    string name;
//    int time;
//    string ridename;
//    Node* next;
//
//    Node(int data, string n, int t, string rn)
//    {
//        this->id = data;
//        this->name = n;
//        this->time = t;
//        this->ridename = rn;
//        this->next = nullptr;
//    }
//};
//
//class queue
//{
//public:
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
//    void enqueue(int id,string n,int t,string rn)
//    {
//        Node* temp = new Node(id,n,t,rn);
//        temp->next = nullptr;
//
//        if (isEmpty())
//        {
//            front = rear = temp;
//            rear->next = rear;
//        }
//        else
//        {
//            temp->next = front;
//            rear->next = temp;
//            rear = temp;
//        }
//    }
//
//    void searchingthevisitors(string n)
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        Node* p = front;
//        bool isfound = false;
//        do
//        {
//            if (p->name == n)
//            {
//                isfound = true;
//                cout << "the visitor with name : " << p->name << " is present" << endl;
//                return;
//            }
//            p = p->next;
//        } while (p != front);
//        if (!isfound)
//            cout << "the visitor is not present" << endl;
//    }
//
//   /* void sort()
//    {
//        if (isEmpty() || front == rear) 
//        {
//            return; 
//        }
//
//        Node* current = front;
//        do 
//        {
//            Node* biggernode = front;
//            do
//            {
//                if (biggernode->time < biggernode->next->time) 
//                { 
//                   
//                    int tempid = biggernode->id;
//                    string tempname = biggernode->name;
//                    int temptime = biggernode->time;
//                    string tempridename = biggernode->ridename;
//
//                    biggernode->id = biggernode->next->id;
//                    biggernode->name = biggernode->next->name;
//                    biggernode->time = biggernode->next->time;
//                    biggernode->ridename = biggernode->next->ridename;
//
//                    biggernode->next->id = tempid;
//                    biggernode->next->name = tempname;
//                    biggernode->next->time = temptime;
//                    biggernode->next->ridename = tempridename;
//                }
//                biggernode = biggernode->next;
//            } while (biggernode != rear);
//
//            current = current->next;
//        } while (current != rear);
//    }*/
//
//    void dequeue()
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        else if (front == rear) 
//        {
//            delete front;
//            front = nullptr;
//            rear = nullptr;
//        }
//        else
//        {
//            Node* temp = front;
//            front = front->next;
//            rear->next = front; 
//            delete temp;
//        }
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
//        Node* p = front;
//        cout << "Queue elements: "<<endl;
//        do
//        {
//            cout <<"visitor id is: "<< p->id <<endl;
//            cout << "visitor name is: " << p->name << endl;
//            cout << "Time of ride is: " << p->time << endl;
//            cout << "Ride preference is: " << p->ridename << endl;
//            p = p->next;
//            cout << endl;
//        } while (p != front);
//    }
//
//
//   
//};
//
//int main() 
//{
//    queue q;
//
//    q.enqueue(1,"Ali", 10,"ferriswheel");
//    q.enqueue(2, "Warda", 15, "Droptower");
//    q.enqueue(3,"Hassan",5,"bumpercars");
//    q.enqueue(4,"Laiba",20,"Hauntedmansion");
//   
//    q.display();
//   
//    q.searchingthevisitors("Laiba");
//    cout << endl;
//    //cout << "sorting...." << endl;
//    //q.sort();
//    /*cout << "displaying the visitors ....." << endl;
//    q.display();*/
//    cout << "dequeing the visitors who have taken the ride..." << endl;
//    q.dequeue();
//    q.dequeue();
//    q.dequeue();
//    q.dequeue();
//    cout << "after all the visitors who have entered the ride my queue is : " << endl;
//    q.display();
//
//
//
//    return 0;
//}
