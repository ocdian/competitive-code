#include <bits/stdc++.h>
using namespace std;
double dp[3000][3000];
//dp[i][j] is the probability of collecting j heads with i coins
//and it is the sum of the probability of getting either a tail, so the previous i-1 coins
//should have j heads, and so dp[i][j] = dp[i-1][j] * 1-pro_head
//or we get a head, in which case we need to have j-1 heads with the previous i-1 coins, in which
//case dp[i][j] += dp[i-1][j-1] *  pro_head
//when we have 0 heads, the probability only includes the first case, which is getting tails
//the answer is the sum of every probability i,j, where i is equal to n, the total number of coins
//and j is no less than ceil(n/2), which is equal to (n+1)/2 (since n is always odd) 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dp[0][0] = 1;
    for (int coins=1; coins <= n; coins++) {
        double p_heads;
        cin >> p_heads;
        for (int numOfHeads = n; numOfHeads >= 0; numOfHeads--) {
            //first probability, we got a tails, this can occur for any number of heads
            dp[coins][numOfHeads] = dp[coins-1][numOfHeads] * (1-p_heads);
            //second probability, we got a heads, this can occur for any number of heads that is larger than 0
            dp[coins][numOfHeads] += dp[coins-1][numOfHeads-1] * p_heads;
            //the sum of these two pro-bilities, is equal to the total probability of having collected j heads with i coins 
        }
    }
    double ans = 0;
    for (int i=(n+1)/2; i <= n; i++) {
        ans += dp[n][i]; 
    }
    cout << setprecision(10) << fixed << ans << "\n";
    return 0;
}
