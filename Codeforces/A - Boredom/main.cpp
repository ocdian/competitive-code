#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m[100010];
ll dp[100010];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x, lim=-1;
    ll ans = -1;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> x;
        m[x]++;
        lim = max(lim, x);
    }
    dp[1] = 1 * m[1];
    for (int i=2; i <= lim; i++) {
        dp[i] = max(dp[i-1], dp[i-2]+(m[i]*i));
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
    return 0;
}