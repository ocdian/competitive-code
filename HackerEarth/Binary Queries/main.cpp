#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int x; 
        cin >> x;
        if (x == 0) {
            int l,r;
            cin >> l >> r;
            if (a[r] == 1) cout << "ODD\n";
            else cout << "EVEN\n";
        }
        else {
            int it;
            cin >> it;
            a[it] = 1 - a[it];
        }
    }
    return 0;
}