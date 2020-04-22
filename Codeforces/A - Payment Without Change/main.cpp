#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        if (s%n<=b && a*n+b>=s) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}