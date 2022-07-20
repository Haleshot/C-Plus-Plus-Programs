// Breadth First Search Traversal program in C++

#include <iostream>
#include <queue>
using namespace std;


void BFS(int **array, int source, int n)
{
    int visited[n];
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    visited[source] = 1;
    q.push(source);
    while(!(q.empty()))
    {
        int v = q.front();
        cout << v << " - ";
        q.pop();
        for(int i = 0; i < n; i++)
        {

            if(array[v][i] > 0)
            {
                if(visited[i] == 0)
                {
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
    }
}

void Display_Adjacency_Matrix(int **array, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "\t";
            cout << array[i][j];
            cout << "\t";
        }
        cout << endl;
    }

}

int main()
{
    int row, column, s;

    cout << "Enter the Dimensions for the Square Matrix : " << endl << endl;

    cout << "Enter Limit for Height(Row of matrix) of Image : " << endl;
    cin >> row;

    cout << "Enter Limit for Width(Column of matrix)  of Image : " << endl;
    cin >> column;

    int **adj = new int *[row];
    for(int i = 0; i < row; i++)
    {
        adj[i] = new int [column];
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(i == j)
            {
                adj[i][j] = 0;
                continue;
            }
            else
            {
                cin >> adj[i][j];
            }
        }
    }
    cout << endl;

    cout << "The Adjacency Matrix is : " << endl;
    Display_Adjacency_Matrix(adj, column);

    cout << "Enter the Source Vertex : ";
    cin >> s;

    BFS(adj, s, column);
    return 0;
}

