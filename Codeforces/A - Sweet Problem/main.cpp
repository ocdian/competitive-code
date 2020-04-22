#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        vector<int> rgb(3);
        for (int i=0; i < 3; i++) cin >> rgb[i];
        sort(rgb.begin(), rgb.end());
        int ans = rgb[0];
        int r = rgb[2]-rgb[1];
        rgb[2] -= (r <= rgb[0])?r:rgb[0];
        rgb[0] -= r;
        if (rgb[0]>0) {
            rgb[1] -= rgb[0]/2;
            rgb[0] -= rgb[0]/2;
            rgb[2] -= rgb[0];
        }
        ans += min(rgb[1],rgb[2]);
        cout << ans << "\n";
    }
    return 0;
}