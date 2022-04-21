#include <iostream>
#include <queue>
using namespace std;

class Breadth_Firsth_Search
{
public:
    void BFS(int** , int, int);
    void Display_Adjacency_Matrix(int**);
};

void Breadth_Firsth_Search::BFS(int **array, int source, int n)
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




int main()
{
    class Breadth_Firsth_Search bfs;
    int row, column, s;

    

    cout << "Enter the Dimensions for the Square Matrix : " << endl << endl;

    cout << "Enter Limit for Height(Row of matrix) of Image : " << endl;
    cin >> row;

    cout << "Enter Limit for Width(Column of matrix)  of Image : " << endl;
    cin >> column;

    int **adj = new int*[row];
    for(int i = 0; i < row; i++)
    {
        adj[i] = new int [column];
    }

    // Creating an Adjacency Matrix
    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                cin >> adj[i][j];
                continue;
            }
        }
    }

    cout << "Enter the Source Vertex : ";
    cin >> s;

    bfs.BFS(adj, s, column);



    return 0;
}