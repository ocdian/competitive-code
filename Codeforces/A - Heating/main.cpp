#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, c, sum;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> c >> sum;
        int ans = 0;
        if (sum <= c) ans = sum;
        else {
            if (sum % c == 0) ans = pow(sum, 2)/c;
            else {
                int rem = sum / c;
                while (sum % c != 0) {
                    ans += pow(rem, 2);
                    c--;
                    sum -= rem;
                }
                ans += pow(sum, 2)/c;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}