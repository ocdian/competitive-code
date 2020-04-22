#include <bits/stdc++.h>
using namespac std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int v,t;
    string s;
    cin >> t;
    while (t--) {
        cin >> v;
        int dist[v][v];
        for (int i=0; i < v; i++) {
            for (int j=0; j < v; j++) {
                cin >> s;
                if (s=="INF") dist[i][j] = INT_MAX;
                else {
                    stringstream ss;
                    ss << s;
                    ss >> dist[i][j];
                }
            }
        }
        for (int k=0; k < v; k++) {
            for (int i=0; i < v; i++) {
                for (int j=0; j < v; j++) {
                    if (dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX)
                        dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
        for (int i=0; i < v; i++) {
            for (int j=0; j < v; j++) {
                if (dist[i][j]>=10000000) cout << "INF";
                else cout << dist[i][j];
                cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}