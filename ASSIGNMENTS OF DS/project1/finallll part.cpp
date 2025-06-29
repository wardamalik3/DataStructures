//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#ifndef INFINITY
//const int INFINITY = 1000000; // A large constant representing infinity
//#endif
//
//class Node {
//public:
//    int data;
//    int type;  // restaurant = 1; non = 0
//    string name;
//
//    Node() {
//        data = 0;
//        type = 0; // Changed to 0 for non-restaurant
//        name = "";
//    }
//};
//
//void initializeAdjacencyMatrix(bool**& adjacencyMatrix, int size) {
//    adjacencyMatrix = new bool* [size * size];
//    for (int i = 0; i < size * size; i++) {
//        adjacencyMatrix[i] = new bool[size * size];
//        for (int j = 0; j < size * size; j++) {
//            adjacencyMatrix[i][j] = false;
//        }
//    }
//}
//
//void displayAdjacencyMatrix(bool** adjacencyMatrix, int size) {
//    cout << "Adjacency Matrix:" << endl;
//    for (int i = 0; i < size * size; i++) {
//        for (int j = 0; j < size * size; j++) {
//            cout << adjacencyMatrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void displayNodeArray(Node** arr, int size) {
//    cout << "Node Array:" << endl;
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << arr[i][j].data << " ";
//        }
//        cout << endl;
//    }
//}
//
//void graphcreation(Node**& arr, bool**& adjacencyMatrix, int size) {
//    int data = 1;
//    arr = new Node * [size];
//    for (int i = 0; i < size; i++) {
//        arr[i] = new Node[size];
//        for (int j = 0; j < size; j++) {
//            arr[i][j].data = data++;
//        }
//    }
//
//    initializeAdjacencyMatrix(adjacencyMatrix, size);
//}
//
//void establishGraph(Node** arr, bool** adjacencyMatrix, int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            // Checking top neighbor
//            if (i > 0) {
//                adjacencyMatrix[arr[i][j].data - 1][arr[i - 1][j].data - 1] = true;
//                adjacencyMatrix[arr[i - 1][j].data - 1][arr[i][j].data - 1] = true;
//            }
//            // Checking bottom neighbor
//            if (i < size - 1) {
//                adjacencyMatrix[arr[i][j].data - 1][arr[i + 1][j].data - 1] = true;
//                adjacencyMatrix[arr[i + 1][j].data - 1][arr[i][j].data - 1] = true;
//            }
//            // Checking left neighbor
//            if (j > 0) {
//                adjacencyMatrix[arr[i][j].data - 1][arr[i][j - 1].data - 1] = true;
//                adjacencyMatrix[arr[i][j - 1].data - 1][arr[i][j].data - 1] = true;
//            }
//            // Checking right neighbor
//            if (j < size - 1) {
//                adjacencyMatrix[arr[i][j].data - 1][arr[i][j + 1].data - 1] = true;
//                adjacencyMatrix[arr[i][j + 1].data - 1][arr[i][j].data - 1] = true;
//            }
//        }
//    }
//}
//
//class Restaurant {
//public:
//    int locofres;
//    string nameofres;
//    int numoforders;
//    int* customerarray;
//    int* maxtimearray;
//    bool* orderstatus;
//
//    Restaurant() {
//        locofres = 0;
//        nameofres = "";
//        numoforders = 0;
//    }
//
//    void settingrestaurantdata(int s) {
//        customerarray = new int[s];
//        maxtimearray = new int[s];
//        orderstatus = new bool[s];
//        numoforders = s;
//    }
//};
//
//void displayRestaurantArray(Restaurant* arrayofres, int numofres) {
//    cout << "Restaurant Array:" << endl;
//    for (int i = 0; i < numofres; i++) {
//        cout << "Restaurant " << i + 1 << ": " << arrayofres[i].nameofres << " at location " << arrayofres[i].locofres << endl;
//    }
//}
//
//void displayShortestPath(int* shortestPaths, int size, int startNode, string restaurantName) {
//    cout << "Path for Restaurant " << restaurantName << ": ";
//    int currentNode = startNode - 1;
//    cout << startNode << "->";
//    while (shortestPaths[currentNode] != -1) {
//        cout << shortestPaths[currentNode] + 1 << "->";
//        currentNode = shortestPaths[currentNode];
//    }
//    cout << restaurantName << " = " << shortestPaths[startNode - 1] << " units" << endl;
//}
//
//void dijkstraAlgorithm(Node** arr, bool** adjacencyMatrix, int size, int startNode, int* shortestPaths, string restaurantName) {
//    // Initialize distances array with infinity
//    for (int i = 0; i < size; i++) {
//        shortestPaths[i] = 100000;
//    }
//
//    // Distance from start node to itself is 0
//    shortestPaths[startNode] = 0;
//
//    // Array to keep track of visited nodes
//    bool* visited = new bool[size];
//    for (int i = 0; i < size; i++) {
//        visited[i] = false;
//    }
//
//    // Perform Dijkstra's algorithm
//    for (int count = 0; count < size; count++) {
//        // Find the minimum distance vertex not yet visited
//        int minDistance = 100000, minIndex = 0;
//        for (int v = 0; v < size; v++) {
//            if (!visited[v] && shortestPaths[v] < minDistance) {
//                minDistance = shortestPaths[v];
//                minIndex = v;
//            }
//        }
//
//        // Mark the picked vertex as visited
//        visited[minIndex] = true;
//
//        // Update distances of adjacent vertices
//        for (int v = 0; v < size; v++) {
//            if (minIndex >= 0 && !visited[v] && adjacencyMatrix[arr[minIndex]->data-1][arr[v]->data-1] && shortestPaths[minIndex] != 100000
//                && shortestPaths[minIndex] + 1 < shortestPaths[v]) {
//                shortestPaths[v] = shortestPaths[minIndex] + 1;
//            }
//        }
//    }
//
//    // Clean up memory
//    delete[] visited;
//
//    // Display shortest paths
//    cout << "Shortest paths for restaurant " << restaurantName << ":" << endl;
//    for (int i = 0; i < size; i++) {
//        if (shortestPaths[i] != 100000) {
//            displayShortestPath(shortestPaths, size, i + 1, restaurantName);
//        }
//    }
//}
//
//int main() {
//    int size = 0;
//    int numofres = 0;
//
//    cout << "Enter size of the grid: ";
//    cin >> size;
//
//    Node** arr;
//    bool** adjacencyMatrix;
//    graphcreation(arr, adjacencyMatrix, size);
//    establishGraph(arr, adjacencyMatrix, size);
//
//    // Display node array
//    displayNodeArray(arr, size);
//
//    // Display adjacency matrix
//    displayAdjacencyMatrix(adjacencyMatrix, size);
//
//    // Dealing with the restaurants
//    cout << "Enter number of restaurants: ";
//    cin >> numofres;
//
//    Restaurant* arrayofres = new Restaurant[numofres];
//
//    for (int i = 0; i < numofres; i++) {
//        cout << "Enter name of restaurant: ";
//        cin >> arrayofres[i].nameofres;
//
//        cout << "Enter location of restaurant: ";
//        cin >> arrayofres[i].locofres;
//
//        cout << "Enter number of orders for " << arrayofres[i].nameofres << ": ";
//        cin >> arrayofres[i].numoforders;
//
//        // Updating customer details
//        arrayofres[i].customerarray = new int[arrayofres[i].numoforders];
//        arrayofres[i].maxtimearray = new int[arrayofres[i].numoforders];
//        arrayofres[i].orderstatus = new bool[arrayofres[i].numoforders];
//
//        for (int j = 0; j < arrayofres[i].numoforders; j++) {
//            int locofcus, maxtime;
//            cout << "Enter details of customer " << j + 1 << endl;
//            cout << "Enter location of customer: ";
//            cin >> locofcus;
//            arrayofres[i].customerarray[j] = locofcus;
//            cout << "Enter max time given by customer: ";
//            cin >> maxtime;
//            arrayofres[i].maxtimearray[j] = maxtime;
//        }
//    }
//
//    // Display restaurant array
//    displayRestaurantArray(arrayofres, numofres);
//
//    // Dijkstra's algorithm to find shortest paths
//    int shortestTime = 100000;
//    for (int i = 0; i < numofres; i++) {
//        int* shortestPaths = new int[size];
//        dijkstraAlgorithm(arr, adjacencyMatrix, size, arrayofres[i].locofres, shortestPaths, arrayofres[i].nameofres);
//
//        // Find shortest time to deliver all orders
//        int maxTimeToCustomer = 0;
//        for (int j = 0; j < arrayofres[i].numoforders; j++) {
//            int destination = arrayofres[i].customerarray[j];
//            if (shortestPaths[destination - 1] > maxTimeToCustomer) {
//                maxTimeToCustomer = shortestPaths[destination - 1];
//            }
//        }
//        if (maxTimeToCustomer < shortestTime) {
//            shortestTime = maxTimeToCustomer;
//        }
//
//        delete[] shortestPaths;
//    }
//
//    cout << "Shortest time to deliver all orders: " << shortestTime << " units" << endl;
//
//    // Clean up memory
//    for (int i = 0; i < size; ++i) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    for (int i = 0; i < size * size; ++i) {
//        delete[] adjacencyMatrix[i];
//    }
//    delete[] adjacencyMatrix;
//
//    delete[] arrayofres;
//
//    return 0;
//}
