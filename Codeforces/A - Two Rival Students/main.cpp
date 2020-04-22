#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,t,a,b,x;
    cin >> t;
    while (t--) {
        cin >> n >> x >> a >> b;
        int n1 = max(a,b), n2 = min(a,b);
        while (n1 < n && x > 0) {
            n1++;
            x--;
        }
        while (n2 > 1 && x > 0) {
            n2--;
            x--;
        }
        cout << n1 - n2 << "\n";
    }
    
    return 0;
}