#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,a,b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int r = abs(b-a);
        int ans = 0;
        if (r >= 5) {
            ans += r/5;
            r -= (r/5)*5;
        }
        if (r >= 2) {
            ans += r/2;
            r -= (r/2)*2;
        }
        ans += r;
        cout << ans << "\n";
    } 
    return 0;
}