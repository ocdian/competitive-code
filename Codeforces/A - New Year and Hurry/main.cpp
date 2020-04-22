#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    int l = 0, h = n;
    while (l < h) {
        double r = h-l;
        int x = l + ceil(r/2);
        int t = 0;
        for (int i=1; i <= x; i++)
            t += i*5;
        int ans = 240-t;
        if (ans >= k) l = x;
        else h = x-1;
    }
    cout << l << "\n";
    return 0;
}