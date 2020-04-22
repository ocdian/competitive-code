#include <bits/stdc++.h>
using namespace std;
void dfs(int s, vector<int> g[], bool vis[])
{
    if (!vis[s]) {
        vis[s] = true;
        cout << s << " ";
        for (int i=0; i < g[s].size(); i++) dfs(g[s][i], g, vis); 
    }
}
int main() {
    return 0;    
}