
//#include<iostream>
//using namespace std;
//class stack
//{
//private:
//	int* arr;
//	int arraysize;
//	int top;
//public:
//	stack(int s)
//	{
//		arr = new int[s];
//		arraysize =s;
//		top = -1;
//
//	}
//	bool isempty()
//	{
//		return (top == -1);
//	}
//	bool isfull()
//	{
//		bool status=false;
//		if (top == arraysize - 1)
//		{
//			status = true;
//
//		}
//		else
//		{
//			status = false;
//		}
//		return status;
//	}
//	void push(int data)
//	{
//		if (isfull())
//		{
//			cout << "the stack is full" << endl;
//		}
//		else
//		{
//			cout << "pushing elements into stack...." << endl;
//			top++;
//			arr[top] = data;
//		}
//	}
//	int pop()
//	{
//		int value = -1;
//		if (isempty())
//		{
//			cout << "the stack is empty" << endl;
//		}
//		else
//		{
//			value = arr[top];
//			top--;
//		}
//		cout << value<<" ";
//		return value;
//	}
//
//};
//int main()
//{
//	stack obj(4);
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
