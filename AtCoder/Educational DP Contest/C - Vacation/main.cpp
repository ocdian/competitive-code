#include <bits/stdc++.h>
#define MAX(x,y,z) max(x, max(y,z))
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int dp[3] = {0,0,0};
    int curDp[3] = {0,0,0};
    int n;
    cin >> n;
    while (n--) {
        int a[3];
        for (int i=0; i < 3; i++) cin >> a[i];
        for (int i=0; i < 3; i++) {
            for (int j=0; j < 3; j++)
                if (i != j) curDp[j] = max(curDp[j], dp[i]+a[j]); 
        }
        for (int i=0; i < 3; i++) dp[i] = curDp[i];
    }
    cout << MAX(dp[0],dp[1],dp[2]) << "\n"; 
    return 0;
}
