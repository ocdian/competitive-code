#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    vector<ll> a(N);
    for (int i=0; i < N; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i=0; i < N; i++) {
        ans = max(ans, a[i]*(N-i));
    }
    cout << ans << "\n";
    return 0;
}