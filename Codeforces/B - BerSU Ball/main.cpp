#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n;
    vector<int> b(n);
    for (int i=0; i < n; i++) cin >> b[i];
    cin >> m;
    vector<int> g(m);
    for (int i=0; i < m; i++) cin >> g[i];
    int ans = 0;
    int it1 = 0, it2 = 0;
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    while (it1 < b.size() && it2 < g.size())
    {
        if (abs(b[it1]-g[it2])<=1) {
            ans++;
            it1++;
            it2++;
        }
        else if (b[it1]<g[it2]) it1++;
        else it2++;
    }
    cout << ans << "\n";
    return 0;
}