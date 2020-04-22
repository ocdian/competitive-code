#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        int n,x;
        double sum = 0;
        cin >> n;
        for (int i=0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        int out = ceil(sum/n); 
        cout << out << "\n";
    }
    return 0;
}