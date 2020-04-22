#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i < n; i++) 
        cin >> a[i];
    for (int i=n-2; i >= 0; i--) {
        for (int j=n-1; j > i; j--) {
            int current = a[i];
            int to = a[j];
            if (to >= current) continue;
            int r = current-to;
            a[j] += r;
            a[i] -= r;
        }
    }    
    for (int i=0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
    return 0;
}