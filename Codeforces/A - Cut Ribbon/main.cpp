#include <bits/stdc++.h>
using namespace std;
#define MIN(x,y,z) min(x, min(y,z))
#define MAX(x,y,z) max(x, max(y,z))
int dp[4001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int l;
    int a[3];
    cin >> l >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    for (int i=0; i < a[0]; i++) dp[i] = 0;
    for (int i=a[0]; i <= l; i++) {
        for (int j=0; j < 3; j++) {
            int piece = a[j];
            if (i == piece || (i > piece && dp[i-piece]!=0)) 
                dp[i] = max(dp[i], 1 + dp[i-piece]);
        }
    } 
    cout << dp[l] << "\n";
    return 0;
}