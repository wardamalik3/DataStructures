//#include<iostream>
//using namespace std;
//
//class queue {
//private:
//    int size = 5;
//    int arr[5];
//    int front;
//    int rear;
//    int count;
//
//public:
//    queue()
//    {
//        front = 0;
//        rear = -1;
//        count = 0;
//    }
//
//    bool isFull()
//    {
//        return count == size;
//    }
//
//    bool isEmpty()
//    {
//        return count == 0;
//    }
//
//    void enqueue(int value)
//    {
//        if (isFull())
//        {
//            cout << "queue is full" << endl;
//            return;
//        }
//        rear = (rear + 1) % size;
//        arr[rear] = value;
//        count++;
//    }
//
//    int dequeue()
//    {
//        if (isEmpty())
//        {
//            cout << "queue is empty" << endl;
//            return -1;
//        }
//        int storingvalue = arr[front];
//        front = (front + 1) % size;
//        count--;
//        return storingvalue;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "queue is empty" << endl;
//            return;
//        }
//        int i = front;
//        while (i != rear) {
//            cout << arr[i] << " ";
//            i = (i + 1) % size;
//        }
//        cout << arr[rear] << endl;
//    }
//};
//
//int main() {
//    queue q;
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//    q.enqueue(40);
//    q.enqueue(50);
//    cout << "my queue is :" << endl;
//    q.display();
//    cout << " dequeuing..." << endl;
//    q.dequeue();
//    q.dequeue();
//    cout << "now my queue is: " << endl;
//    q.display();
//    cout << "again inserting..." << endl;
//    q.enqueue(60);
//    q.enqueue(70);
//    cout << "now the queue is: " << endl;
//    q.display();
//    return 0;
//}
//
