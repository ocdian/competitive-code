#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[200010];
int last_occ[200010];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n,x;
    cin >> t;
    while (t--) {
        cin >> n;
        int l = INT_MAX;
        for (int i=0; i <= n; i++) {
            cnt[i] = 0;
            last_occ[i] = 0;
        }
        for (int i=0; i < n; i++) {
            cin >> x;
            cnt[x]++;
            if (cnt[x] > 1) l = min(l,i-last_occ[x]+1);
            last_occ[x] = i;  
        }
        if (l < INT_MAX) cout << l << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}