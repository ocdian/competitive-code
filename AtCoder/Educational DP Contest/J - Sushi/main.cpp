#include <bits/stdc++.h>
using namespace std;
double cnt[4],n;
const int N = 310;
long double memo[N][N][N];
bool vis[N][N][N];
long double dp(double a, double b, double c, double empty) {
    if (empty == n) return 0;
    if (!vis[(int)a][(int)b][(int)c]) {
        vis[(int)a][(int)b][(int)c] = true;
        long double res = 0;
        if (a) res += (dp(a-1, b, c, empty+1)+1)*(a/n);
        if (b) res += (dp(a+1, b-1, c, empty)+1)*(b/n);
        if (c) res += (dp(a, b+1, c-1, empty)+1)*(c/n);
        res += (empty/n);
        res /= (1-(empty/n));
        memo[(int)a][(int)b][(int)c] = res;
    }
    return memo[(int)a][(int)b][(int)c];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int x;
    for (int i=0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }
    cout << setprecision(12) << fixed << dp(cnt[1], cnt[2], cnt[3], 0) << "\n";
    return 0;
}
