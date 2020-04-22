#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int ans;
    string a,b;
    cin >> a >> b;
    for (int i=0; i < a.size(); i++) {
        a[i] = (char)tolower(a[i]);
        b[i] = (char)tolower(b[i]);
    }
    if (a==b) ans = 0;
    else if (a < b) ans = -1;
    else ans = 1;
    cout << ans << "\n"; 
    return 0;
}