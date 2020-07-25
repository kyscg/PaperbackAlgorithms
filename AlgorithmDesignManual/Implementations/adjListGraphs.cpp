#include <bits/stdc++.h>
using namespace std;

void printGraph(vector<int> graph[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << "\n"
             << i;
        for (auto x : graph[i])
            cout << " -> " << x;
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

    vector<int> graph[v];

    // cout << "Enter the connections:";
    for (int i = 0; i < e; i++)
    {
        int start, end;
        cin >> start >> end;

        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    printGraph(graph, v);

    cout << "\n";
    return 0;
}