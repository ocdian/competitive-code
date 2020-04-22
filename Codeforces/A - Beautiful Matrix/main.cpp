#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x,y;
    for (int i=0; i < 5; i++)
        for (int j=0; j < 5; j++) {
            int a;
            cin >> a;
            if (a==1) x = i, y = j;
        }
    int ans = (x >= 2)?x-2:2-x;
    ans += (y >= 2)?y-2:2-y;
    cout << ans << "\n";
    return 0;
}