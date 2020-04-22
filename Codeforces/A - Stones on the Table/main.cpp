#include <bits/stdc++.h>
using namespace std;
int ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string a;
    cin >> a;
    for (int i=1; i < n; i++) {
        if (a[i]==a[i-1]) {
            ans++;
            a[i]=a[i-1];
        }
    }
    cout << ans << "\n";
    return 0;
}