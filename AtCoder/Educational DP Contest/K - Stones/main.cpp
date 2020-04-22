#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<bool> dp(k+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = false;
    for (int i=0; i <= k; i++) {
        for (int x : a) {
            if (x <= i && !dp[i-x]) dp[i] = true;
        }
    }
    puts(dp[k]?"First":"Second");
    return 0;
}
