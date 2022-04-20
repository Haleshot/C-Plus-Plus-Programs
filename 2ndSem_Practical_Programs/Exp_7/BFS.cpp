#include <iostream>
#include <queue>
using namespace std;
void BFS(int, int, int);


int main()
{
    /*code*/
    return 0;
}

void BFS(int adj[10][10], int source, int n)
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
            if(adj[source][k] == 1)
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