#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];    
const int mod = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int h,w;
    cin >> h >> w;
    string a[h];
    for (int i=0; i < h; i++) cin >> a[i];
    dp[0][0] = 1;
    for (int i=0; i < h; i++) {
        for (int j=0; j < w; j++) {
            for (int row = i; row <= i+1; row++) {
                int col = j;
                if (row == i) col++;
                if (row < h && col < w && a[row][col]=='.') dp[row][col] += dp[i][j];
                if (dp[row][col]>=mod) dp[row][col] %= mod;
            }
        }
    }
    cout << dp[h-1][w-1] << "\n";
    return 0;
}
