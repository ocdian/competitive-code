#include <bits/stdc++.h>
using namespace std;
int path[100010];
vector<int> g[100010];
int ans;
int dp[100010];
bool vis[100010];
int indeg[100010];
void dfs(int n) {
    vis[n] = true;
    for (int i=0; i < g[n].size(); i++) {
        int node = g[n][i];
        dp[node] = max(dp[node], dp[n]+1);
        ans = max(ans, dp[node]);
        indeg[node]--;
        if (indeg[node]==0) dfs(node);
    }
}
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,u,v;
    cin >> n >> m;
    while (m--) {
        cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    for (int i=1; i <= n; i++) 
        if (!vis[i] && indeg[i]==0) dfs(i);
    cout << ans << "\n";
    return 0;
}
