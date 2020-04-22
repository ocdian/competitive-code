#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, prev = 0, current, ans = 0, length = 0;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> current;
        if (current>=prev) length++;
        else length = 1;
        prev = current;
        ans = max(ans, length);
    }
    cout << ans << "\n";
    return 0;
}