//#include<iostream>
//#include<string>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	int type;  // restaurant = 1; non = 0
//	string name;
//
//	node()
//	{
//		data = 0;
//		type = false;
//		name = "";
//	}
//};
//
//void initializeAdjacencyMatrix(bool**& adjacencyMatrix, int size)
//{
//	adjacencyMatrix = new bool* [size * size];
//	for (int i = 0; i < size * size; i++)
//	{
//		adjacencyMatrix[i] = new bool[size * size];
//		// Initialize all elements to false
//		for (int j = 0; j < size * size; j++)
//		{
//			adjacencyMatrix[i][j] = false;
//		}
//	}
//}
//
//void displayAdjacencyMatrix(bool** adjacencyMatrix, int size)
//{
//	cout << "Adjacency Matrix:" << endl;
//	// Print column indices
//	cout << "  ";
//	for (int i = 0; i < size * size; i++) {
//		cout << i + 1 << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < size * size; i++)
//	{
//		// Print row index
//		cout << i + 1 << " ";
//		for (int j = 0; j < size * size; j++)
//		{
//			cout << adjacencyMatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void displayNodeArray(node** arr, int size)
//{
//	cout << "Node Array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << arr[i][j].data << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//
//void displayNodeArray2(node** arr, int size)
//{
//	cout << "Node Array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i][j].type == 1)
//			{
//				cout << "R" << " ";
//
//			}
//			else
//			{
//				cout << arr[i][j].data << " ";
//			}
//		}
//		cout << endl;
//	}
//}
//
//
//
//void graphcreation(node**& arr, bool**& adjacencyMatrix, int size)
//{
//	int data = 1;
//	int i = 0, j = 0;
//	// Initializing the array
//	int num = 1;
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < size; j++)
//		{
//			arr[i][j].data = num++;
//		}
//	}
//
//	initializeAdjacencyMatrix(adjacencyMatrix, size);
//}
//
//void establishGraph(node**& arr, bool** adjacencyMatrix, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			// Checking top neighbor
//			if (i > 0)
//			{
//				adjacencyMatrix[arr[i][j].data - 1][arr[i - 1][j].data - 1] = true;
//			}
//			// Checking bottom neighbor
//			if (i < size - 1)
//			{
//				adjacencyMatrix[arr[i][j].data - 1][arr[i + 1][j].data - 1] = true;
//			}
//			// Checking left neighbor
//			if (j > 0)
//			{
//				adjacencyMatrix[arr[i][j].data - 1][arr[i][j - 1].data - 1] = true;
//			}
//			// Checking right neighbor
//			if (j < size - 1)
//			{
//				adjacencyMatrix[arr[i][j].data - 1][arr[i][j + 1].data - 1] = true;
//			}
//		}
//	}
//}
//
//class restaurant
//{
//public:
//	int locofres;
//	string nameofres;
//	int numoforders;
//	int* customerarray;
//	int* maxtimearray;
//	bool* orderstatus;
//	restaurant()
//	{
//		locofres = 0;
//		nameofres = "";
//		numoforders = 0;
//	}
//	void settingrestaurantdata(int s)
//	{
//		customerarray = new int[s];
//		maxtimearray = new int[s];
//		orderstatus = new bool[s];
//		numoforders = s;
//	}
//
//
//};
//
//void displayRestaurantArray(restaurant* arrayofres, int numofres)
//{
//	cout << "Restaurant Array:" << endl;
//	for (int i = 0; i < numofres; i++)
//	{
//		cout << "Restaurant " << i + 1 << ": " << arrayofres[i].nameofres << " at location " << arrayofres[i].locofres << endl;
//	}
//}
//
//int main()
//{
//	node n;
//	restaurant r;
//	int size = 0;
//	int numofres = 0;
//	int numofriders = 0;
//	string nameofres;
//	int locofres = 0;
//	int numoforders = 0;
//	string cusname;
//	int locofcus = 0;
//	int maxtime = 0;
//	bool isreataurant = false;
//	cout << "enter size of the grid" << endl;
//	cin >> size;
//	// graph declaration
//
//	node** arr = new node * [size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = new node[size];
//	}
//
//	//// adjacencyMatrix declaration
//	bool** adjacencyMatrix;
//	//for (int i = 0; i < size; i++)
//	//{
//	//	
//	//		adjacencyMatrix[i] = new bool[size*size];
//	//
//	//}
//
//
//	graphcreation(arr, adjacencyMatrix, size);
//	establishGraph(arr, adjacencyMatrix, size);
//
//
//	// Display node array
//	displayNodeArray(arr, size);
//
//	// Display adjacency matrix
//	displayAdjacencyMatrix(adjacencyMatrix, size);
//	
//
//
//
//
//	// dealing with the restaurants
//
//	cout << "Enter number of restaurants: ";
//	cin >> numofres;
//	restaurant* arrayofres = new restaurant[numofres];
//
//	for (int i = 0; i < numofres; i++)
//	{
//		cout << "Enter name of restaurant: ";
//		cin >> arrayofres[i].nameofres;
//
//		cout << "Enter location of restaurant: ";
//		cin >> arrayofres[i].locofres;
//
//		cout << "Enter number of orders for " << arrayofres[i].nameofres << ": ";
//		cin >> numoforders;
//		arrayofres[i].settingrestaurantdata(numoforders);
//
//		// Updating customer details
//		for (int j = 0; j < numoforders; j++)
//		{
//			cout << "Enter details of customer " << j + 1 << endl;
//			cout << "Enter location of customer: ";
//			cin >> locofcus;
//			arrayofres[i].customerarray[j] = locofcus;
//
//			cout << "Enter max time given by customer: ";
//			cin >> maxtime;
//			arrayofres[i].maxtimearray[j] = maxtime;
//		}
//	}
//
//	/// traversing graph and updating the changes
//
//	for (int i = 0; i < numofres; i++)
//	{
//		string n = arrayofres[i].nameofres;
//		int loc = arrayofres[i].locofres;
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				if (arr[i][j].data == loc)
//				{
//					arr[i][j].name = n;
//					arr[i][j].type = 1;
//				}
//			}
//		}
//	}
//
//	// Display restaurant array
//	displayRestaurantArray(arrayofres, numofres);
//
//	// Display node array
//	displayNodeArray2(arr, size);
//
//	// Free memory
//	for (int i = 0; i < size; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//	delete[] arrayofres;
//
//	// Free adjacency matrix memory
//	for (int i = 0; i < size; i++) {
//		delete[] adjacencyMatrix[i];
//	}
//	delete[] adjacencyMatrix;
//
//	return 0;
//}
