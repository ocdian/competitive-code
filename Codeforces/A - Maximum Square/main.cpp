#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, ans;
        cin >> n;
        int a[n];
        for (int i=0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int cnt;
        for (int i=1; i <= a[n-1]; i++) {
            cnt = 0;
            for (int j=0; j < n; j++)
                if (a[j]>=i) cnt++;
            if (cnt >= i) ans = i;
        }
        cout << ans << "\n";
    }
    return 0;
}