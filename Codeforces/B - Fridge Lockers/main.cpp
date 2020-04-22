#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,m,sum=0,x;
        cin >> n >> m;
        for (int i=0; i < n; i++) {
            cin >> x;
            sum += x;
        }    
        if (n <= 2 || m < n) cout << -1 << "\n";
        else {
            cout << 2*sum << "\n";
            for (int i=1; i < n; i++)
                cout << i << " " << i+1 << "\n";
            cout << n << " " << 1;
            cout << "\n";
        }
    }
    return 0;
}