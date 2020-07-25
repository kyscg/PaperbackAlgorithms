#include <bits/stdc++.h>
using namespace std;

void printGraph(vector<pair<int, int>> graph[], int v)
{
    int i, j;
    for (int k = 0; k < v; k++)
    {
        cout << k << " -> ";
        for (auto l = graph[k].begin(); l != graph[k].end(); l++)
        {
            i = l->first;
            j = l->second;
            cout << i << "(" << j << ") ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Enter number of vertices and edges:";
    int v, e;
    cin >> v >> e;

    vector<pair<int, int>> graph[v];

    // cout << "Enter the connections:";
    for (int i = 0; i < e; i++)
    {
        int start, end, weight;
        cin >> start >> end >> weight;

        graph[start].push_back(make_pair(end, weight));
        graph[end].push_back(make_pair(start, weight));
    }

    printGraph(graph, v);

    cout << "\n";
    return 0;
}