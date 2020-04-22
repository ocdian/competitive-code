#include <bits/stdc++.h>
using namespace std;
int ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[5];
    for (int i=1; i <= 4; i++) cin >> a[i];
    string s;
    cin >> s;
    for (int i=0; i < s.size(); i++)
        ans += a[s[i]-'0'];
    cout << ans << "\n";
    return 0;
}