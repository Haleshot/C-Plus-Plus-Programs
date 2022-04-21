#include <iostream>
#include <stack>
using namespace std;

class Depth_First_Search
{
public:
    void DFS(int** , int, int);
    void Display_Adjacency_Matrix(int**, int);
};

void DFS(int **array, int source, int n)
{
    int visited[n];
    stack<int> s;
    for(int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    s.push(source);
    while(!(s.empty()))
    {
        int v = s.top();
        s.pop();

        if(visited[v] != 1)
        {
            cout << v << " - ";
            visited[v] = 1;
            for(int i = 0; i < n; i++)
            {

                if(array[v][i] > 0)
                {
                    s.push(i);
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
    class Depth_First_Search dfs;
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

    cout << "The Adjacency Matrix is :" << endl;
    dfs.Display_Adjacency_Matrix(adj, column);
    
    cout << "Enter the Source Vertex : ";
    cin >> s;

    dfs.DFS(adj, s, column);



    return 0;
}