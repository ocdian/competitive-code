#include <bits/stdc++.h>
using namespace std;
#define inf 1e+9
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    int h[n];
    for (int i=0; i < n; i++) cin >> h[i];
    int dp[n];
    fill_n(dp, n, inf);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <= i+k; j++)
            if (j < n)
                dp[j] = min(dp[j], dp[i] + abs(h[i]-h[j]));
    }
    cout << dp[n-1] << "\n";
    return 0;
}
