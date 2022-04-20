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
        source = q.front();
        cout << source;
        q.pop();
        for(int k = 0; k < n; k++)
        {
            
            if(array[source][k] == 1)
            {
                if(visited[k] == 0)
                {
                    visited[k] = 1;
                    q.push(k);
                }
            }
        }
    }
}

void Add_Edge(int v, int value)
{
    queue<int> *adj;
    adj = new queue <int>[v];
    adj[v].push(value);

}


int main()
{
    int row, column;
    cout << "Enter Limit for Height(Row of matrix) of Image : ";

    cin >> row;
    cout << "Enter Limit for Width(Column of matrix)  of Image : ";
    cin >> column;

    int **adj = new int *[row];
    for(int i = 0; i < row; i++)
    {
        adj[i] = new int [column];
    }

    Add_Edge(0, 1);
    Add_Edge(0, 2);
    Add_Edge(1, 2);
    Add_Edge(2, 0);
    Add_Edge(2, 3);
    Add_Edge(3, 3);

    BFS(adj, 2, 3);
    return 0;
}

