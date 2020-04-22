#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0;
    cin >> n;
    vector<pii> a(n);
    for (int i=0; i < n; i++) {
        cin >> a[i].first >> a[i].second; 
    }
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if (a[j].first == a[i].second)
                ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}