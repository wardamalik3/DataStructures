#include <iostream>
#include <queue>
#include <limits>
using namespace std;

class linkedlist
{
public:
    int vdata;
    int weight;
    linkedlist* next;
    linkedlist(int d, int w)
    {
        this->vdata = d;
        this->weight = w;
        this->next = nullptr;
    }
};

class graph
{
public:
    int size;
    linkedlist** arraypointingtolist;
    graph(int s)
    {
        this->size = s;
        this->arraypointingtolist = new linkedlist * [size];
        for (int i = 0; i < size; i++)
        {
            this->arraypointingtolist[i] = nullptr;
        }
    }
    void addedge(int src, int dest, int w)
    {
        linkedlist* newnode = new linkedlist(dest, w);
        if (arraypointingtolist[src] == nullptr)
        {
            arraypointingtolist[src] = newnode;
        }
        else
        {
            newnode->next = arraypointingtolist[src];
            arraypointingtolist[src] = newnode;
        }
    }

    void shortestPathFromSource(int src)
    {
        int* dist = new int[size];
        for (int i = 0; i < size; ++i)
        {
            dist[i] = numeric_limits<int>::max();
        }
        dist[src] = 0;

        queue<int> q;
        q.push(src);

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            linkedlist* current = arraypointingtolist[u];
            while (current != nullptr)
            {
                int v = current->vdata;
                int weight = current->weight;

                if (dist[v] > dist[u] + weight)
                {
                    dist[v] = dist[u] + weight;
                    q.push(v);
                }

                current = current->next;
            }
        }

        cout << "Shortest paths from node " << src << " to every other node:" << endl;
        for (int i = 1; i < size; ++i)
        {
            cout << "Node " << i << ": " << dist[i] << endl;
        }

        delete[] dist;
    }
};

int main()
{
    int sizeofgraph;
    cout << "Enter size of graph: ";
    cin >> sizeofgraph;
    graph g(sizeofgraph);
    g.addedge(1, 2, 10);
    g.addedge(1, 3, 15);
    g.addedge(1, 4, 20);
    g.addedge(2, 4, 8);
    g.addedge(3, 4, 7);

    cout << "Applying Dijkstra's algorithm:" << endl;
    g.shortestPathFromSource(1);


    return 0;
}
