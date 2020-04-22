#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int ans = 0,n,h;
    cin >> n >> h;
    for (int i=0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= h) ans++;
        else ans += 2;
    }
    cout << ans << "\n";
    return 0;
}