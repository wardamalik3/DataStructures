#include <iostream>
#include <string>
#include <iomanip>
#include <queue>
#include <limits>
using namespace std;

#ifndef INFINITY
const int INFINITY = 1000000; // A large constant representing infinity
#endif

class Node
{
public:
    int data;
    int type;  // restaurant = 1; non = 0
    string name;

    Node() {
        data = 0;
        type = 0; // Changed to 0 for non-restaurant
        name = "";
    }
};

void initializeAdjacencyMatrix(bool**& adjacencyMatrix, int size)
{
    adjacencyMatrix = new bool* [size * size];
    for (int i = 0; i < size * size; i++) {
        adjacencyMatrix[i] = new bool[size * size];
        for (int j = 0; j < size * size; j++) {
            adjacencyMatrix[i][j] = false;
        }
    }
}

void displayAdjacencyMatrix(bool** adjacencyMatrix, int size)
{
    cout << "Adjacency Matrix:" << endl;
    // Print column indices
    cout << setw(4) << " ";
    for (int i = 0; i < size * size; i++)
    {
        cout << setw(4) << i + 1;
    }
    cout << endl;

    for (int i = 0; i < size * size; i++)
    {
        // Print row index
        cout << setw(4) << i + 1;
        for (int j = 0; j < size * size; j++)
        {
            cout << setw(4) << adjacencyMatrix[i][j];
        }
        cout << endl;
    }
}


void displayNodeArray(Node** arr, int size)
{
    cout << "Node Array:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j].data << " ";
        }
        cout << endl;
    }
}

void graphcreation(Node**& arr, bool**& adjacencyMatrix, int size) {
    int data = 1;
    arr = new Node * [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new Node[size];
        for (int j = 0; j < size; j++)
        {
            arr[i][j].data = data++;
        }
    }

    initializeAdjacencyMatrix(adjacencyMatrix, size);
}

void establishGraph(Node** arr, bool** adjacencyMatrix, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Checking top neighbor
            if (i > 0) {
                adjacencyMatrix[arr[i][j].data - 1][arr[i - 1][j].data - 1] = true;
                adjacencyMatrix[arr[i - 1][j].data - 1][arr[i][j].data - 1] = true;
            }
            // Checking bottom neighbor
            if (i < size - 1) {
                adjacencyMatrix[arr[i][j].data - 1][arr[i + 1][j].data - 1] = true;
                adjacencyMatrix[arr[i + 1][j].data - 1][arr[i][j].data - 1] = true;
            }
            // Checking left neighbor
            if (j > 0) {
                adjacencyMatrix[arr[i][j].data - 1][arr[i][j - 1].data - 1] = true;
                adjacencyMatrix[arr[i][j - 1].data - 1][arr[i][j].data - 1] = true;
            }
            // Checking right neighbor
            if (j < size - 1) {
                adjacencyMatrix[arr[i][j].data - 1][arr[i][j + 1].data - 1] = true;
                adjacencyMatrix[arr[i][j + 1].data - 1][arr[i][j].data - 1] = true;
            }
        }
    }
}

class Restaurant {
public:
    int locofres;
    string nameofres;
    int numoforders;
    int* customerarray;
    int* maxtimearray;
    bool* orderstatus;

    Restaurant() {
        locofres = 0;
        nameofres = "";
        numoforders = 0;
    }

    void settingrestaurantdata(int s) {
        customerarray = new int[s];
        maxtimearray = new int[s];
        orderstatus = new bool[s];
        numoforders = s;
    }
};

void displayRestaurantArray(Restaurant* arrayofres, int numofres) {
    cout << "Restaurant Array:" << endl;
    for (int i = 0; i < numofres; i++) {
        cout << "Restaurant " << i + 1 << ": " << arrayofres[i].nameofres << " at location " << arrayofres[i].locofres << endl;
    }
}

void displayShortestPath(int* shortestPaths, int size, int startNode, string restaurantName) {
    cout << "Path for Restaurant " << restaurantName << ": ";
    int currentNode = startNode;
    cout << startNode << "->";
    while (shortestPaths[currentNode] != 100000) {
        cout << shortestPaths[currentNode] + 1 << "->";
        currentNode = shortestPaths[currentNode];
    }
    cout << restaurantName << " = " << shortestPaths[startNode - 1] << " units" << endl;
}

void dijkstraAlgorithm(Node** arr, bool** adjacencyMatrix, int size, int startNode, int* shortestPaths, int* Paths, string restaurantName) {
    // Initialize distances array with infinity
    for (int i = 0; i < size * size; i++) {
        shortestPaths[i] = INFINITY;
    }

    // Distance from start node to itself is 0
    shortestPaths[startNode - 1] = 0;

    // Array to keep track of visited nodes
    bool* visited = new bool[size * size] { false };

    // Perform Dijkstra's algorithm
    queue<int> q;
    q.push(startNode);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // Mark the current node as visited
        visited[u - 1] = true;

        // Update distances of adjacent vertices
        for (int v = 0; v < size * size; v++) {
            if (!visited[v] && adjacencyMatrix[u - 1][v] && shortestPaths[u - 1] != INFINITY) {
                shortestPaths[v] = shortestPaths[u - 1] + 1;
                Paths[v] = u - 1;
                q.push(v + 1);
            }
        }
    }

    // Clean up memory
    delete[] visited;

    // Display shortest paths
    cout << "Shortest paths for restaurant " << restaurantName << ":" << endl;
    displayShortestPath(Paths, size, startNode - 1, restaurantName);
}


bool  checkAlphabets(char c) {
    // Check if the character is alphabetic
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool checkSpace(char c) {
    // Check if the character is a space
    return c == ' ';
}

bool validateName(const std::string& name) {
    // Check if the input is not empty
    if (name.empty()) {
        return false;
    }

    // Check if all characters in the string are alphabetic or spaces
    for (char c : name) {
        if (!checkAlphabets(c) && !checkSpace(c)) {
            return false;
        }
    }

    return true;
}


int main()
{
    int size = 0;
    int numofres = 0;

    // Input validation for size of the grid
    do
    {
        cout << "Enter size of the grid: ";
        cin >> size;
        if (size <= 0) {
            cout << "Size of the grid must be a positive integer. Please try again." << endl;
        }
    } while (size <= 0);



    Node** arr;
    bool** adjacencyMatrix;
    graphcreation(arr, adjacencyMatrix, size);
    establishGraph(arr, adjacencyMatrix, size);

    // Display node array
    displayNodeArray(arr, size);

    // Display adjacency matrix
    displayAdjacencyMatrix(adjacencyMatrix, size);

    // Input validation for number of restaurants
    do {
        cout << "Enter number of restaurants: ";
        cin >> numofres;
        if (numofres <= 0) {
            cout << "Number of restaurants must be a positive integer. Please try again." << endl;
        }
    } while (numofres <= 0);


    Restaurant* arrayofres = new Restaurant[numofres];

    for (int i = 0; i < numofres; i++) {

        do
        {
            cout << "Enter name of restaurant: ";
            cin >> arrayofres[i].nameofres;

        } while (!validateName(arrayofres[i].nameofres));


        // Input validation for location of restaurant
        do {
            cout << "Enter location of restaurant: ";
            cin >> arrayofres[i].locofres;

            if (arrayofres[i].locofres <= 0 || arrayofres[i].locofres > size * size) {
                cout << "Location of restaurant must be within the grid boundaries. Please try again." << endl;
            }
        } while (arrayofres[i].locofres <= 0 || arrayofres[i].locofres > size * size);


        // Input validation for number of orders
        do {
            cout << "Enter number of orders for " << arrayofres[i].nameofres << ": ";
            cin >> arrayofres[i].numoforders;

            if (arrayofres[i].numoforders <= 0) {
                cout << "Number of orders must be a positive integer. Please try again." << endl;
            }
        } while (arrayofres[i].numoforders <= 0);



        // Updating customer details
        arrayofres[i].customerarray = new int[arrayofres[i].numoforders];
        arrayofres[i].maxtimearray = new int[arrayofres[i].numoforders];
        arrayofres[i].orderstatus = new bool[arrayofres[i].numoforders];

        for (int j = 0; j < arrayofres[i].numoforders; j++) {
            int locofcus, maxtime;
            cout << "Enter details of customer " << j + 1 << endl;


            // Input validation for location of customer
            do {
                cout << "Enter location of customer: ";
                cin >> locofcus;
                if (locofcus <= 0 || locofcus > size * size) {
                    cout << "Location of customer must be within the grid boundaries. Please try again." << endl;
                }
            } while (locofcus <= 0 || locofcus > size * size);

            arrayofres[i].customerarray[j] = locofcus;

            // Input validation for max time given by customer
            do {
                cout << "Enter max time given by customer: ";
                cin >> maxtime;
                if (maxtime < 0) {
                    cout << "Max time given by customer must be a non-negative integer. Please try again." << endl;
                }
            } while (maxtime < 0);

            arrayofres[i].maxtimearray[j] = maxtime;

        }
    }

    // Display restaurant array
    displayRestaurantArray(arrayofres, numofres);

    // Dijkstra's algorithm to find shortest paths
    int shortestTime = 100000;
    for (int i = 0; i < numofres; i++) {
        int* shortestPaths = new int[size * size];
        int* Paths = new int[size * size];
        dijkstraAlgorithm(arr, adjacencyMatrix, size, arrayofres[i].locofres, shortestPaths, Paths, arrayofres[i].nameofres);

        // Find shortest time to deliver all orders
        int maxTimeToCustomer = 0;
        for (int j = 0; j < arrayofres[i].numoforders; j++) {
            int destination = arrayofres[i].customerarray[j];
            if (shortestPaths[destination - 1] > maxTimeToCustomer) {
                maxTimeToCustomer = shortestPaths[destination - 1];
            }
        }
        if (maxTimeToCustomer < shortestTime) {
            shortestTime = maxTimeToCustomer;
        }

        delete[] shortestPaths;
    }

    cout << "Shortest time to deliver all orders: " << shortestTime << " units" << endl;

    // Clean up memory
    for (int i = 0; i < size; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    for (int i = 0; i < size * size; ++i) {
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;

    delete[] arrayofres;

    return 0;
}
