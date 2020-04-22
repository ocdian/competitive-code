#include <bits/stdc++.h>
#define INF 1e+9
#define debug cout << ">>"
using namespace std;
int main() {
    int n;
    cin >> n;
    int h[n];
    for (int i=0; i < n; i++) cin >> h[i];
    int dp[n];
    fill_n(dp, n, INF);
    dp[0] = 0;
    for (int i=0; i < n; i++) {
        for (int j=i+1; j <= i+2; j++)
            dp[j] = min(dp[j], dp[i]+abs(h[i]-h[j]));
    }
    cout << dp[n-1] << "\n";
    return 0;
}
