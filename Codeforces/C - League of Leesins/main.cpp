#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<int> adj[N];
bool vis[N];
int cnt[N];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, startNode;
    cin >> n;
    for (int i=0; i < n-2; i++) {
        int x,y,z;
        cin >> x >> y >> z;
        cnt[x]++;
        cnt[y]++;
        cnt[z]++;
        adj[x].push_back(y);
        adj[x].push_back(z);
        adj[y].push_back(x);
        adj[y].push_back(z);
        adj[z].push_back(x);
        adj[z].push_back(y); 
    }
    vector<int> ans(n);
    for (int i=1; i <= n; i++) {
        if (cnt[i]==1) {
            startNode = i;
            break;
        }
    }
    ans[0] = startNode;
    if (cnt[adj[startNode][0]]==2) ans[1] = adj[startNode][0];
    else ans[1] = adj[startNode][1];
    int node = ans[1];
    vis[node] = true;
    vis[startNode] = true;
    for (int i=2; i < n; i++) {
        int child;
        for (int it = 0; it < adj[startNode].size(); it++) {
            if (!vis[adj[startNode][it]]) {
                child = adj[startNode][it];
                break;
            }
        }
        vis[child] = true;
        ans[i] = child;
        startNode = node;
        node = child;
    } 
    for (int i=0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
    return 0;
}