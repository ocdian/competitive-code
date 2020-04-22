#include <bits/stdc++.h>
using namespace std;
int dp[3010][3010];
string a,b;
string generateLCS(int n, int m) {
    string lcs = "";
    while (n > 0 && m > 0)
    {
        if (a[n-1]==b[m-1]) {
            lcs += a[n-1];
            n--;
            m--;
        }
        else {
            if (dp[n-1][m]>dp[n][m-1]) n--;
            else m--;
        }
    }
    reverse(lcs.begin(), lcs.end());
    return lcs;
}
string lcs(int n, int m) {
    pair<int,int> maxCell;
    int ans = 0;
    for (int i=0; i <= n; i++) {
        for (int j=0; j <= m; j++) {
            if (i==0 || j==0) dp[i][j] = 0;
            else if (a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if (dp[i][j]>ans) {
                ans = dp[i][j];
                maxCell.first = i;
                maxCell.second = j;
            }
        }
    } 
    return generateLCS(maxCell.first, maxCell.second);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    cout << lcs(a.size(), b.size()) << "\n";
    return 0;
}
