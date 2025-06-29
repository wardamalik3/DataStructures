//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node *next;
//	node(int d)
//	{
//		data = d;
//		next = nullptr;
//	}
//	~node()
//	{
//		if (this->next != nullptr)
//		{
//			delete next;
//			this->next = nullptr;
//		}
//	}
//};
//
//class linkedlist
//{
//public:
//	node *head=nullptr;
//	void creationoflinkedlist(int value)
//	{
//		node* temp = new node(value);
//		if (head == NULL)
//		{
//			head = temp;
//		}
//		else
//		{
//			node* current = head;
//			while (current->next != nullptr)
//			{
//				current = current->next;
//			}
//			current->next = temp;
//		}
//	}
//
//	void addathead(node*head , int val)
//	{
//		node* nodeathead = new node(val);
//		nodeathead->next = head;
//		head = nodeathead;
//		
//
//	}
//	void addatlocation(int position, int value, node *head)
//	{
//		if (position == 1)
//		{
//			addathead( head,value);
//			return;
//		}
//		node* temp = head;
//		int count = 1;
//		while (count < position - 1)
//		{
//			temp = temp->next;
//			count ++;
//		}
//		if (temp == nullptr)
//		{
//			creationoflinkedlist(value);
//		}
//		else
//		{
//			node* newnode = new node(value);
//			newnode->next = temp->next;
//			temp->next = newnode;
//			
//		}
//		
//		
//
//	}
//	void addatlocationbyvalue(node* head, int value)
//	{
//		node* current = head;
//		while (current != nullptr)
//		{
//			if (current->data == value)
//			{
//				node* newNode = new node(value);
//				newNode->next = current->next;
//				current->next = newNode;
//				current = newNode->next; // Move current to the node after the newly inserted node
//			}
//			else
//			{
//				current = current->next;
//			}
//		}
//	}
//
//
//	void printdata()
//	{
//		node* current = head;
//		while (current != nullptr)
//		{
//			cout << "my linked list is: " << current->data<<endl;
//			current = current->next;
//		}
//	}
//
//
//};
//int main()
//{
//	linkedlist list;
//	list.creationoflinkedlist(20);
//	list.creationoflinkedlist(30);
//	list.creationoflinkedlist(50);
//	list.creationoflinkedlist(40);
//	list.addathead(list.head, 10);
//	list.addatlocation(3,60,list.head);
//	list.addatlocationbyvalue(list.head,50);
//	list.printdata();
//
//	return 0;
//}