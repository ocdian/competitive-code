#include <bits/stdc++.h>
using namespace std;
int groups[1000010];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x,g=1, prev=0;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> x;
        for (int it=prev+1; it <= x+prev; it++) groups[it] = g;
        g++;
        prev += x;
    }
    int m;
    cin >> m;
    while (m--) {
        cin >> x;
        cout << groups[x] << "\n";
    }
    return 0;
}