#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        int n,r,x, hits = 0, dec = 0;
        cin >> n >> r;
        set<int, greater<int>> monsters;
        for (int i=0; i < n; i++) {
            cin >> x;
            monsters.insert(x);
        }
        set<int>::iterator it;
        for (it = monsters.begin(); it != monsters.end(); it++) {
            int pos = *it;
            pos -= dec;
            if (pos > 0) {
                hits++;
                dec += r;
            }
        }
        cout << hits << "\n";
    }
    return 0;
}