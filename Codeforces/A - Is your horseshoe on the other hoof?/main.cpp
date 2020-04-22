#include <bits/stdc++.h>
using namespace std;
map<int,int> m;
int ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for (int i=0; i < 4; i++) {
        int x;
        cin >> x;
        m[x]++;
        if (m[x]>1) ans++;
    }
    cout << ans << "\n";
    return 0;
}