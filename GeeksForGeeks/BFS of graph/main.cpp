#include <bits/stdc++.h>
using namespace std;
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int i=0; i < adj[node].size(); i++) {
            int child = adj[node][i];
            if (!vis[child]) {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}
int main() {
    return 0;
}