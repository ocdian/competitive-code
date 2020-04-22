#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX(x,y,z) max(x, max(y,z))
#define MIN(x,y,z) min(x, min(y,z))
const int N = 2e5;
const ll INF = INT_MAX;
int n;
vector<int> a(N+1);
ll dp[N+1][3];
ll solve(int i, int counter) {
    if (counter >= 3) return INF;
    if (i >= n) return 0;
    if (!dp[i][counter]) {
        dp[i][counter] = min(a[i]+solve(i+1,0), solve(i+1, counter+1));
    }
    return dp[i][counter];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i=0; i < n; i++) cin >> a[i];
    cout << solve(0,0) << "\n";
    return 0;
}