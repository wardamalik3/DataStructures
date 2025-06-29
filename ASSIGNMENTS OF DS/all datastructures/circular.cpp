//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//	node(int value)
//	{
//		this->data = value;
//		this->next = nullptr;
//	}
//	~node()
//	{
//		if (this->next != NULL)
//		{
//			delete next;
//			next = NULL;
//		}
//	}
//};
//
//void insertnodes(node*& tail, int element, int value)
//{
//	if (tail == NULL)
//	{
//		node* mynode = new node(value);
//		tail = mynode;
//		mynode->next = tail;
//
//	}
//	else
//	{
//		node* current = tail;
//		while (current->data != element)   // agar current ka data neenche se bhejje hoyee element ke data ke equsal naiie haai tu tbb while ke ander aaoo but agar equal ho jata haii tuu while ke bahir wala challee gaaa 
//		{
//			current = current->next;   
//		}
//		node* tempnode = new node(value);
//		tempnode->next = current->next;
//		current->next = tempnode;
//
//
//	}
//
//}
//void printdata(node *tail)
//{
//	node* curr = tail;
//	do
//	{
//		cout << curr->data<<" ";
//		curr = curr->next;
//	} while (curr!= tail);
//
//} 
//int main()
//{
//	node* tail = nullptr;
//	insertnodes(tail, 5, 3);
//	insertnodes(tail, 3, 7);
//	insertnodes(tail, 7, 8);
//	cout << "printing my circular linked list" << endl;
//	printdata(tail);
//	return 0;
//}