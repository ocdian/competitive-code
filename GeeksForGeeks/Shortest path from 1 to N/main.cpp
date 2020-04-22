#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin >> t;
    while (t--) {
        int cnt = 0;
        cin >> n;
        while (n>1) {
            if (n%3) n--;
            else n /= 3;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}