#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i=1; i <= n; i++) {
        ans += (i-1)*a[i];
        ans -= (n-i)*a[i];
    } 
    cout << ans << "\n";
    return 0;
}