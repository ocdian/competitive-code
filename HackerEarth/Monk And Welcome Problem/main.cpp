#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1);
    for (int i=1; i <= n; i++) cin >> a[i];
    for (int i=1; i <= n; i++) cin >> b[i];
    for (int i=1; i <= n; i++) cout << a[i]+b[i] << " ";
    return 0;
}