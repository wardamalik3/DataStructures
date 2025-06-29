//#include<iostream>
//using namespace std;
//
//class node
//{
//public:
//	string name;
//	int location;
//	int numoforders;
//	int maxtime;
//	int x=0;
//	int y=0;
//	string cuslistofres[5];
//	//int neighbors[5];
//};
//
//void addEdge(node** arr, int sourceX, int sourceY, int destinationX, int destinationY)
//{
//	int sourceLocation = arr[sourceX][sourceY].location;
//	int destinationLocation = arr[destinationX][destinationY].location;
//	int neighborCount = 0;
//	while (arr[sourceX][sourceY].neighbors[neighborCount] != -1) 
//	{
//		neighborCount++;
//	}
//	arr[sourceX][sourceY].neighbors[neighborCount] = destinationLocation;
//}
//int main()
//{
//	int size=0;
//	cout << "enter size of the graph" << endl;
//	cin >> size;
//	int numofres = 0;
//	cout << "enter number of restaurant" << endl;
//	cin >> numofres;
//	int numofriders = 0;
//	cout << "enter num of riders "<< endl;
//	cin >> numofriders;
//
//	//matrix declaration
//	node ** arr=new node*[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = new node[size];
//	}
//
//	int data = 1;
//	int i = 0,j=0;
//	//initiallizingg the arrayy
//	for ( i = 0; i < size; i++)
//	{
//		for ( j = 0; j < size; j++)
//		{
//		   
//			arr[i][j].location=data++;
//			arr[i][j].x = i;
//			arr[i][j].y = j;
//
//		}
//	}
//
//	string nameofres;
//	int locofres=0;
//	int numofcustomers=0;
//	int choice = 0;
//	while (choice < numofres)
//	{
//		cout << "enter name of restaurants" << endl;
//		cin >> nameofres;
//		cout << "enter locofres" << endl;
//		cin >> locofres;
//		int num_orders = 0;
//		cout << "enter num of orders for " << nameofres << endl;
//		cin >> num_orders;
//		
//		string cusname;
//		int cusloc = 0;
//		int maxtime = 0;
//		for (i = 0; i < size; i++)
//		{
//			for (j = 0; j < size; j++)
//			{
//				if (arr[i][j].location == locofres)
//				{
//					arr[i][j].name = nameofres;
//					arr[i][j].numoforders = num_orders;
//					int num = 0;
//					while (num < num_orders)
//					{
//						cout << "enter detial of customer "<<num+1<< "for order delievery" << endl;
//						cout << "enter name of customer" << endl;
//						cin >> cusname;
//						cout << "enter location of customer" << endl;
//						cin >> cusloc;
//						cout << "enter maxtime given by customer" << endl;
//						cin >> maxtime;
//						for (int i = 0; i < size; i++)
//						{
//							for (int j = 0; j < size; j++)
//							{
//								if (arr[i][j].location == cusloc)
//								{
//									arr[i][j].name = cusname;
//									arr[i][j].maxtime = maxtime;
//									arr[i][j].cuslistofres[num] = cusname;
//								}
//								else
//								{
//									cout << "wrong location..." << endl;
//								}
//							}
//						}
//						num++;
//
//					}
//				}
//				else
//				{
//					cout << "wrong location..." << endl;
//				}
//
//			}
//		}
//		choice++;
//	}
//
//	// Create edges in the graph based on the connections between nodes
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < size; j++)
//		{
//			if (i > 0) 
//			{
//				addEdge(arr, i, j, i - 1, j);  // Add edge with the```cpp
//			}
//			if (j > 0) {
//				addEdge(arr, i, j, i, j - 1);  // Add edge with the node to the left
//			}
//			if (i < size - 1) {
//				addEdge(arr, i, j, i + 1, j);  // Add edge with the node below
//			}
//			if (j < size - 1) {
//				addEdge(arr, i, j, i, j + 1);  // Add edge with the node to the right
//			}
//		}
//	}
//
//	
//
//
//	return 0;
//}