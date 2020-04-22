#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll x,y;
        cin >> x >> y;
        if (x-y>1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}