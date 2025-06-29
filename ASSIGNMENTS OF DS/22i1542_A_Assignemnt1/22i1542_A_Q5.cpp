//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int timestamp;
//	int senderid;
//	string content;
//	node* next;
//	node(int t,int id,string cnt)
//	{
//		this->timestamp = t;
//		this->senderid = id;
//		this->content = cnt;
//		this->next = nullptr;
//	}
//
//
//};
//
//
//
//class queue
//{
//public:
//	node* front;
//	node* rear;
//	queue()
//	{
//		front = nullptr;
//		rear = nullptr;
//	}
//	bool isEmpty()
//	{
//		return front == nullptr;
//	}
//	void sendmessage(int t, int id,string cnt)
//	{
//		  node* temp = new node(t, id, cnt);
//		  temp->next = nullptr;
//		 if (isEmpty())
//		  {
//		       front = rear = temp;
//		        
//		  }
//		  else
//		   {
//		        rear->next = temp;
//		        rear = temp;
//		   }
//
//	}
//	
//	void sort()
//	{
//		if (isEmpty() || front->next == nullptr)
//		{
//			cout << "my queue is emptyy.." << endl;
//			return;
//		}
//
//		node* current = front;
//		while (current != nullptr)
//		{
//			node* smallernode = current;
//			node* temp = current->next;
//			while (temp != nullptr)
//			{
//				
//				if (temp->timestamp < smallernode->timestamp)
//				{
//					smallernode = temp;
//				}
//				temp = temp->next;
//			}
//
//			
//			if (smallernode != current)
//			{
//				
//				node* prev = front;
//				while (prev->next != smallernode)
//				{
//					prev = prev->next;
//				}
//				prev->next = smallernode->next;
//
//				
//				smallernode->next = front;
//				front = smallernode;
//			}
//
//			
//			current = current->next;
//		}
//	}
//
//	void dequeue()
//	{
//		if (isEmpty())
//		{
//			cout << "Queue is empty" << endl;
//			return;
//		}
//		node* temp = front;
//		front = front->next;
//		delete temp;
//		if (front == nullptr)
//		{
//			rear = nullptr;
//		}
//	}
//			  
//
//	void display()
//		    {
//		        if (isEmpty())
//		        {
//		            cout << "Queue is empty" << endl;
//		            return;
//		        }
//		        node* p = front;
//		        cout << "Queue elements: "<<endl;
//		       while(p!=nullptr)
//		        {
//				   cout << "Id of sender is: " << p->senderid << endl;
//				   cout << "Time: " << p->timestamp << endl;
//					cout << "Content: " << p->content << endl;
//		            p = p->next;
//		            cout << endl;
//		        }
//		    }
//};
//
//
//int main()
//{
//	queue q;
//	q.sendmessage(10, 1, "Hey there!..");
//	q.sendmessage(5, 2, "Can we talk? ?");
//	q.sendmessage(20, 3, "How are you doing? ");
//
//	q.display();
//	cout << endl;
//	q.sort();
//	cout << "after sorting the queue is: " << endl;
//	q.display();
//	cout << endl;
//	q.dequeue();
//	q.dequeue();
//	q.dequeue();
//	cout << "after messages are receievd now the queue is :" << endl;
//	q.display();
//	return 0;
//}