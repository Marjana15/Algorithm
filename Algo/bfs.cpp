// A Quick implementation of BFS using
// vectors and queue
#include <bits/stdc++.h>
using namespace std;

vector<bool> v;
vector<vector<int>> g;

void bfs(int u)
{
    queue<int> q;

    q.push(u);
    v[u] = true;

    while (!q.empty())
    {

        int f = q.front();
        q.pop();

        cout << f << " ";

        // Enqueue all adjacent of f and mark them visited
//		for (auto i = g[f].begin(); i != g[f].end(); i++) {
//			if (!v[*i]) {
//				q.push(*i);
//				v[*i] = true;
//			}
//		}

        // Enqueue all adjacent of f and mark them visited
        for(int i=0; i<g[f].size(); i++)
        {
            if (!v[i])
            {
                q.push(i);
                v[i] = true;
            }
        }
    }
}

// Driver code
int main()
{
    int n, e;
    cin >> n >> e;

    v.assign(n, false);
    g.assign(n, vector<int>());

    int a, b;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
    }

    for (int i = 0; i < n; i++)
    {
        if (!v[i])
            bfs(i);
    }

    return 0;
}
/*
6 5
0 1
0 2
1 3
1 4
2 5
*/
