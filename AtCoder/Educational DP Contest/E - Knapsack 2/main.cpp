#include <bits/stdc++.h>
using namespace std;
#define inf 10e+9
#define ll long long
ll dp[100010];
int weight[101];
int value[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int maxVal=0,n,w,ans = 0;
    cin >> n >> w;
    for (int i=1; i <= n; i++) {
        cin >> weight[i] >> value[i];
        maxVal += value[i];
    }
    fill_n(dp, maxVal+1, inf);
    dp[0] = 0;
    for (int i=1; i <= n; i++) {
        for (int allowedValue = maxVal; allowedValue >= value[i]; allowedValue--) {
            dp[allowedValue] = min(dp[allowedValue], weight[i]+dp[allowedValue-value[i]]);
            if (dp[allowedValue]<=w) ans = max(ans, allowedValue);
        }
    }
    cout << ans << "\n";
    return 0;
}
