
//#include<iostream>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* next;
//};
//
//class stack
//{
//private:
//	node* top = nullptr;
//public:
//	bool isempty()
//	{
//		if (top == nullptr)
//		{
//			cout << "stack is empty" << endl;
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//		void push(int value)
//		{
//			node* newnode = new node;
//			newnode->data = value;
//			newnode->next = top;
//			top = newnode;
//
//		}
//		void pop()
//		{
//			node* temp=top;
//			int v = 0;
//			if (isempty())
//			{
//				cout << "stack is empty" << endl;
//
//			}
//			else
//			{
//				v = top->data;
//				top = top->next;
//				delete temp;
//				cout << v << " ";
//				
//			}
//		}
//	
//
//};
//int main()
//{
//	stack obj;
//	cout << "pushing elements" << endl;
//	obj.push(5);
//	obj.push(6);
//	obj.push(7);
//	obj.push(8);
//	cout << "popping elements..." << endl;
//	obj.pop();
//	obj.pop();
//	obj.pop();
//	obj.pop();
//	return 0;
//}
