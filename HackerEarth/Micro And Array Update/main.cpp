#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k,ans=0;
        cin >> n >> k;
        for (int i=0; i < n; i++) {
            int x;
            cin >> x;
            ans = max(ans, k - x);
        }
        cout << ans << "\n";
    }
    return 0;
}