#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100010];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,w,weight,val;
    cin >> n >> w;
    while (n--) {
        cin >> weight >> val;
        for (int capacity = w; capacity >= 0; capacity--) {
            if (weight <= capacity) dp[capacity] = max(dp[capacity], dp[capacity-weight]+val);
        }
    }
    cout << dp[w] << "\n";
    return 0;
}
