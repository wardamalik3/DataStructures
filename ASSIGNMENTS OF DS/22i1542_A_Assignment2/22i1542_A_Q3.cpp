//#include<iostream>
//#include<queue>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* ch1;
//	node* ch2;
//	node* ch3;
//	node* ch4;
//	int x = 0, y = 0;
//	int dimension = 4;
//};
//
//void insertnodes(node*& anode, int arr[][4]);
//
//void maketree(node*& root, int arr[][4], int r, int c);
//
////void inorderTraversal(node* root);
//
//void breadthFirstTraversal(node* root);
//void consersionintoarray(node*& root);
//
//int main()
//{
//	int arr[4][4] = { {0, 1, 0, 1}, {1, 0, 1, 0}, {0, 1, 0, 1}, {1, 0, 1, 0} };
//	cout << "My array is: " << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr[i][j] << " ";
//
//		}
//		cout << endl;
//	}
//
//	node* root = nullptr;
//	maketree(root, arr, 4, 4);
//
//	cout << " Traversal: ";
//	/*inorderTraversal(root);*/
//	breadthFirstTraversal(root);
//
//	consersionintoarray(root);
//
//	return 0;
//}
//
//void maketree(node*& root, int arr[][4], int r, int c)
//{
//	/// maaking the rooot
//	root = new node;
//	bool flag0 = false;
//	bool flag1 = false;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				flag0 = true;
//			}
//			else if (arr[i][j] == 1)
//			{
//				flag1 = true;
//			}
//
//		}
//	}
//	if (flag0 && flag1)
//	{
//		root->data = 2;
//		insertnodes(root, arr);
//	}
//	else if (flag0)
//	{
//		root->data = 0;
//
//		return;
//	}
//	else if (flag1)
//	{
//		root->data = 1;
//
//		return;
//	}
//
//	
//
//}
//
//
//void insertnodes(node*& anode, int arr[][4])
//{
//	queue <node*>q;
//	q.push(anode);
//
//	
//	while (!q.empty())
//	{
//		
//		node* temp = q.front();
//		q.pop();
//		int r = temp->dimension;
//		if (temp->data == 2)
//		{
//
//
//			node* child1 = new node;
//			child1->dimension = r / 2;
//			int i=0, j = 0;
//			child1->x = temp->x;
//			child1->y = temp->y;
//			bool flagch10 = false;
//			bool flagch11 = false;
//			for (i = 0; i < r / 2; i++)
//			{
//				for (j = 0; j < r/ 2; j++)
//				{
//					if (arr[i][j] == 0)
//					{
//						flagch10 = true;
//					}
//					else if (arr[i][j] == 1)
//					{
//						flagch11 = true;
//					}
//
//
//				}
//			}
//			if (flagch10 && flagch11)
//			{
//				child1->data = 2;
//			}
//			else if (flagch10)
//			{
//				child1->data = 0;
//				
//			
//
//			}
//			else if (flagch11)
//			{
//				child1->data = 1;
//				
//			}
//
//
//
//
//			/// inserting 2nd node of root
//
//			node* child2 = new node;
//			child2->dimension = r / 2;
//			child2->y = child1->x + r / 2;
//			child2->x = child1->y;
//			bool flagch20 = false;
//			bool flagch21 = false;
//			for (int i = 0; i < r / 2; i++)
//			{
//				for (int j = 0; j < r / 2; j++)
//				{
//					if (arr[i + child2->x][j + child2->y] == 0)
//					{
//						flagch20 = true;
//					}
//					else if (arr[i + child2->x][j + child2->y] == 1)
//					{
//						flagch21 = true;
//					}
//				}
//			}
//			if (flagch20 && flagch21)
//			{
//				child2->data = 2;
//			}
//
//			else if (flagch20)
//			{
//				child2->data = 0;
//				
//			}
//			else if (flagch21)
//			{
//				child2->data = 1;
//			
//			}
//
//			/// insertingg node 3 of rooooooot
//
//			node* child3 = new node;
//			child3->dimension = r / 2;
//			child3->x = child2->x + r / 2;
//			child3->y = child2->y;
//			bool flagch30 = false;
//			bool flagch31 = false;
//			for (int i = 0; i < r / 2; i++)
//			{
//				for (int j = 0; j < r / 2; j++)
//				{
//					if (arr[i + child3->x][j + child3->y] == 0)
//					{
//						flagch30 = true;
//					}
//					else if (arr[i + child3->x][j + child3->y] == 1)
//					{
//						flagch31 = true;
//					}
//				}
//			}
//			if (flagch30 && flagch31)
//			{
//				child3->data = 2;
//			}
//
//			else if (flagch30)
//			{
//				child3->data = 0;
//				
//
//			}
//			else if (flagch31)
//			{
//				child3->data = 1;
//			
//			}
//
//
//			//insertingg node 4 of roooot
//
//			node* child4 = new node;
//			child4->dimension = r / 2;
//			child4->x = child3->x;
//			child4->y = child3->y - r / 2;
//			bool flagch40 = false;
//			bool flagch41 = false;
//			for (int i = 0; i < r / 2; i++)
//			{
//				for (int j = 0; j < r / 2; j++)
//				{
//					if (arr[i + child4->x][j + child4->y] == 0)
//					{
//						flagch40 = true;
//					}
//					else if (arr[i + child4->x][j + child4->y] == 1)
//					{
//						flagch41 = true;
//					}
//				}
//			}
//			if (flagch40 && flagch41)
//			{
//				child4->data = 2;
//			}
//
//			else if (flagch40)
//			{
//				child4->data = 0;
//				
//
//			}
//			else if (flagch41)
//			{
//				child4->data = 1;
//			}
//			q.push(child1);
//			temp->ch1 = child1;
//			q.push(child2);
//			temp->ch2 = child2;
//			q.push(child3);
//			temp->ch3 = child3;
//			q.push(child4);
//			temp->ch4 = child4;
//
//
//
//		}
//
//
//	}
//
//}
//
////void inorderTraversal(node* root)
////{
////	if (root == nullptr)
////		return;
////
////	inorderTraversal(root->ch1);
////	cout << root->data << " ";
////	inorderTraversal(root->ch2);
////	inorderTraversal(root->ch3);
////	inorderTraversal(root->ch4);
////}
//
//void breadthFirstTraversal(node* root)
//{
//	if (root == nullptr)
//		return;
//
//	queue<node*> q;
//	q.push(root);
//	q.push(nullptr);
//
//	while (!q.empty())
//	{
//		node* current = q.front();
//		q.pop();
//
//		if (current == nullptr)
//		{
//			cout << endl;
//			if (!q.empty())
//				q.push(nullptr);
//		}
//		else
//		{
//			cout << current->data << " ";
//			if (current->ch1)
//				q.push(current->ch1);
//			if (current->ch2)
//				q.push(current->ch2);
//			if (current->ch3)
//				q.push(current->ch3);
//			if (current->ch4)
//				q.push(current->ch4);
//		}
//	}
//}
//
//void consersionintoarray(node*& root)
//{
//	int arr[4][4] = { 0 };
//	if (root == nullptr)
//	{
//		return;
//	}
//
//	queue<node*> qu;
//	qu.push(root);
//
//	while (!qu.empty())
//	{
//		node* temp = qu.front();
//		qu.pop();
//		if (temp->data == 2)
//		{
//			qu.push(temp->ch1);
//			qu.push(temp->ch2);
//			qu.push(temp->ch3);
//			qu.push(temp->ch4);
//		}
//		else if (temp->data == 1 || temp->data == 0)
//		{
//			int dim = temp->dimension;
//			for (int i = 0; i < dim; i++)
//			{
//				for (int j = 0; j < dim; j++)
//				{
//					arr[i + temp->x][j + temp->y] = temp->data;
//
//
//				}
//			}
//
//		}
//
//	}
//	cout << "printing my array converted from tree" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
